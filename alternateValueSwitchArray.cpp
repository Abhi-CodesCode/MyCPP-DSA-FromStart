#include<iostream>
using namespace std;
void alternateSwitcher(int arr[],int size){
    int i=0,temp=0;
    while(i+1<size){
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
    i+=2;
    }
}
int main(){
    int size;
    int arr[100];
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the values in array "<<endl<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    alternateSwitcher(arr,6);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}