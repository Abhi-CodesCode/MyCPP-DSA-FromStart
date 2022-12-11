#include<iostream>
using namespace std;
int findDupli(int arr[],int size){
    for(int i=0;i<size;i++){
        bool dupli=false;
        for(int j=0;j<size;j++){
            if(j==i){
                continue;
            }
            if(arr[i]==arr[j]){
                dupli=true;
                return arr[i];
            }
        }
    }
    return -1;
}
int main(){
    int size;
    int arr[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the values in array"<<endl<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int ans=findDupli(arr,size);
    if(ans==-1){
        cout<<"No Duplicte Value!!"<<endl;
        exit(0);
    }
    cout<<ans<<endl;

}