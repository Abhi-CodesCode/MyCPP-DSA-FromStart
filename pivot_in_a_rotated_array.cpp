#include<iostream>
using namespace std;

int isPivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[0]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main(){
    int arr[10]={6,7,8,9,1,2,2,3,4,5};
    cout<<isPivot(arr,10)<<endl;
}