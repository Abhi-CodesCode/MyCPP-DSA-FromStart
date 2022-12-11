#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int n,k;
  cin>>n>>k;
  vector<vector<int>> arr;
  int size=n/k;
  int max_diff=INT_MIN;
  int min_diff=INT_MAX;
  for(int i=0;i<k;i++){
    for(int j=0;j<size;j++){
        int temp;
        cin>>temp;
        arr[i].push_back(temp);

    }
  }
    for(int i = 0;i<k;i++){
      int max=*max_element(arr[i].begin(),arr[i].end());
      int min=*min_element(arr[i].begin(),arr[i].end());
      if(max-min>max_diff){
        max_diff=max-min;
      }
      if(max-min<min_diff){
        min_diff=max-min;
      }
    }
  cout<<max_diff-min_diff<<endl;
  
  return 0;
}