#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int student_count=1;
    int page_sum=0;
    for(int i=0;i<n;i++){
        if(page_sum+arr[i]<=mid){
            page_sum=page_sum+arr[i];
        }
        else{
            student_count++;
            if(student_count>m || arr[i]>mid){
                return false;
            }
            page_sum=arr[i];
        }
    }
    return true;
}

int bookAllocation(vector<int> arr,int n,int m){
    int s=0;
    int e=0;
    for(int i=0;i<n;i++){
        e=e+arr[i];
    }
    int ans=-1;
    int mid=s+(e-s)/2;
    //cout<<mid<<endl;ghost error
    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> arr{20,40,50,55,60};int n=4,m=2;
    
    cout<<bookAllocation(arr,5,2)<<endl;
}