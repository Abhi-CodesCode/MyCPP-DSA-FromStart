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
    int start=0;
    int end=0;              //creating a search space.
    int ans=-1;
    for(int i=0;i<n;i++){
        end=end+arr[i];     //Assuming the max number of pages a student can have is total of all pages.
    }
    int mid=start+(end-start)/2;
    while(start<=end){      //Binary Searching
        if(isPossible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    //vector<int> arr{20,40,50,70,80,90,100};
    vector<int> arr{10,20,30,40,50};
    int n=5;//number of books
    int m=2;//number of students

    
    cout<<bookAllocation(arr,n,m)<<endl;
}