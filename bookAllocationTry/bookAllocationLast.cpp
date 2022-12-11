#include<iostream>
#include<vector>

using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int studentCount=1;
    int pageSum=0;
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){
            pageSum=pageSum+arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pageSum=0;
            pageSum=arr[i];
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
    int mid=s+(e-s)/2;
    int ans=-1;
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
    int n;
    int m;
    cout<<"Enter number of books and students respectively\n";
    cin>>n>>m;
    vector<int> arr;
    cout<<"Enter pageCount in each book in non-increasing order"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    cout<<bookAllocation(arr,n,m)<<endl;
}