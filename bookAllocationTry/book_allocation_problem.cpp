#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool isPossible(vector<int> arr,int n,int m,int mid){
    int student_count=1;    //here we are assigning the books to students,if the page limit which is "mid" is reached,then student count will ++
    int pageSum=0;          
    
    for(int i=0;i<n;i++){
        if(pageSum+arr[i]<=mid){    //keeps adding pages to pagesum which is sum of pages in the books for a particular student,if  it exceeds mid
            pageSum=pageSum+arr[i]; //then new student will come and take this book if it doesn't exceed mid and if there's still students left
        }
        else{
            student_count++;
            if(student_count>m || arr[i]>mid){  //returning false if no more students left or the pages in the next book are
                return false;                   //smaller than pageLimit (mid) as that solution is not possible
            } 
            pageSum=arr[i];                     //assigning new page count for next student and assigning arr[i] to him as he will be taking
        }                                       //that book atleast.
    }
    return true;
}


int bookAllocation(vector<int> arr,int n,int m){
    int s=0;            //so, here we are creating binary search space
    int sum=0;          //getting the end point by summing all the number of pages in the books as that is the maximum solution we can get.
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int ans=-1;
    
    int mid=s+(e-s)/2;
    while(s<=e){        //setting up a binary search on the basis of if the midterm is a possible solution or not
        if(isPossible(arr,n,m,mid)){    //if it is possible solution then that means all the solutions after this number are also possible
            ans=mid;                    //but as we want the minimum number we will try to get a lesser value by shifting end to mid-1
            e=mid-1;
        }
        else{
            s=mid+1;    //else if it is not a possible solution, it means if m students are not able to divide the total no of pages being
        }               //less than or equal to the mid value, than the smaller values won't be able to do so too.so increase the starting to
        mid=s+(e-s)/2;  //get a solution 
    }
    return ans;
}
int main(){

    vector<int> arr{10,20,30,40,50};int n=4,m=2;
    
    cout<<bookAllocation(arr,5,2)<<endl;
}