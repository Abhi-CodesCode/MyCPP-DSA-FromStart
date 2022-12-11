#include<iostream>
#include<vector>
using namespace std;
vector<int> arrayIntersection(int arr1[],int size1,int arr2[],int size2){
    vector<int> ans;
    int i=0,j=0;
    while(i<size1&&j<size2){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    int arr1[5]={1,3,5,5,7};
    int arr2[3]={5,6,9};
    vector<int> ans=arrayIntersection(arr1,5,arr2,3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}