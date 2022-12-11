#include<iostream>
using namespace std;
void revArr(int arr[],int size){
    int start=0,end=size-1;
    //swapping values from first to last then from 2nd to 2nd last and so on...
    while(start<=end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;end--;
    }
}
int main(){
    int size;
    //inputting size of array
    cout<<"Enter size of Array: ";
    cin>>size;
    int arr[100];
    //inputting values of array
    cout<<"Enter the values in Array"<<endl<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    //reversing array using function revArr()
    revArr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}