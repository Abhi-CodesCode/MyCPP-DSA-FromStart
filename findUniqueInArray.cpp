#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    for(int i=0;i<size;i++){
        bool unique=true;
        for(int j=0;j<size;j++){
            if(j==i){
                continue;
            }
            if(arr[i]==arr[j]){
                unique=false;
                break;
            }
        }
        if(unique){
            return arr[i];
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
    int ans=findUnique(arr,size);
    if(ans==-1){
        cout<<"No Unique Value!!"<<endl;
        exit(0);
    }
    cout<<ans<<endl;

}