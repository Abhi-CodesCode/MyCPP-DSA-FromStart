#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
int isPivot(vector<int>& arr, int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        //if mid is smaller than first element means mid lies on the 2nd line and on the same line with pivot so reducing the end will ensure that we get mid closer to pivot
        if(arr[mid]<arr[0]){
            e=mid;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return e;
}

int binarySearch(vector<int>& arr, int s,int e, int k){
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(k==arr[mid]){//if key found then store and break
            ans=mid;
            break;
        }
        else if(k<arr[mid]){//if key smaller then get end smaller so that mid becomes smaller
            e=mid-1;
        }
        else{//if key bigger then get start bigger so that mid becomes bigger
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot=isPivot(arr,n);
    if(k>=arr[pivot]&&k<=arr[n-1]){
        return binarySearch(arr,pivot,n-1,k);
    }
    else{
        return binarySearch(arr,0,pivot-1,k);
    }
    
}

int main(){
    vector<int> arr{4,5,1,2,3};
    cout<<findPosition(arr,5,5)<<endl;
}