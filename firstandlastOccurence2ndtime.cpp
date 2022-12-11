#include<iostream>
#include<vector>

using namespace std;

int firstOcc(vector<int> arr,int n,int x){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int> arr,int n,int x){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==x){
            ans=mid;
            s=mid+1;
        }
        else if(arr[mid]>x){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;    
}

pair<int,int> findFirstLastPosition(vector<int> arr,int n,int x){
    return {firstOcc(arr,n,x),lastOcc(arr,n,x)};
}

int main(){
    vector<int> arr{2,3,4,5,5,5,5,6,7,8};
    pair<int,int> ans=findFirstLastPosition(arr,10,5);
    int firstOcc=ans.first;
    int lastOcc=ans.second;
    int countofElement=lastOcc-firstOcc+1;
    cout<<firstOcc<<" "<<lastOcc<<endl<<"The number of times element occured is"<<" " <<countofElement<<".\n";
}