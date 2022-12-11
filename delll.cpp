#include<iostream>
using namespace std;
int add(int a,int b){
    int sum;
    sum=a+b;
    return sum;
}

int main(){
    int arr[5]={4,5,1,2,3};
    int s=0,e=5-1,pivot;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    cout<< e<<endl;
    
}
