#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> pairSum(vector<int> &arr,int sum){
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++){
       
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==sum){
                vector<int> temp{arr[i],arr[j]};
                ans.push_back(temp);
            }
        }
    }
    return ans;
}
int main(){
    vector<int> arr{2,3,4,6,7,5};
    int sum=9;
    vector<vector <int>> ans=pairSum(arr,sum);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}