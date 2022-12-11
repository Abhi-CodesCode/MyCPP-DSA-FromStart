#include<iostream>
using namespace std;
int sumArr(int arr[],int size){
    int sum=0;
    for(int i = 0;i<size;i++){
        sum=sum+arr[i];
    }
    return sum;
}
int main(){
    int arr[100],size;
    cout<<"Enter size of array: ";
    cin>>size;
    //inputting values in array
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The sum of whole array is "<<sumArr(arr,size)<<endl;
}