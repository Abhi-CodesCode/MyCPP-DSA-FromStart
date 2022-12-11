#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

int firstOcc(vector<int> &arr, int n, int x){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int first=-1;
    while(s<=e){
     if(x==arr[mid]){
         first=mid;
         e=mid-1;
     }
     else if(x<arr[mid]){
         e=mid-1;
     }
     else{
         s=mid+1;
     }
     mid=s+(e-s)/2;  
    }
    return first;
}
int lastOcc(vector<int> &arr, int n, int x){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int last=-1;
    while(s<=e){
     if(x==arr[mid]){
         last=mid;
         s=mid+1;
     }
     else if(x<arr[mid]){
         e=mid-1;
     }
     else{
         s=mid+1;
     }
     mid=s+(e-s)/2;  
    }
    return last;
}
pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
	// Write your code here.
    pair<int,int> ans;
    //cout<<firstOcc(arr,n,x)<<" "<<lastOcc(arr,n,x)<<endl;
    ans={firstOcc(arr,n,x),lastOcc(arr,n,x)};
    return ans;   
}
int main(){
    vector<int> arr{2,3,4,5,5,5,5,6,7,8};
    pair<int,int> ans=findFirstLastPosition(arr,10,5);
    int firstOcc=ans.first;
    int lastOcc=ans.second;
    int countofElement=lastOcc-firstOcc+1;
    cout<<firstOcc<<" "<<lastOcc<<endl<<"The number of times element occured is"<<" " <<countofElement<<".\n";
}

