#include<iostream>
#include<vector>

using namespace std;

int isPivot(vector<int> arr,int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<=arr[0]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int main(){
    vector<int> arr{6,7,8,9,1,2,2,3,4,5};
    vector<int> arr2{4,5,4,4};

    cout<<isPivot(arr2,4)<<endl;
}