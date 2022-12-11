#include<iostream>
using namespace std;
void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}
int isUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[100];
    int size;
    cout<<"Enter size of the array: ";
    cin>>size;
    cout<<"Enter the values in array"<<endl;
    inputArray(arr,size);
    cout<<isUnique(arr,size)<<" is Unique!"<<endl; 
}