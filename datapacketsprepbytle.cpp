//tryingdatapackets.cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    
  int n,k;
  cin>>n>>k;
  int size=n/k;
  int max_diff=INT_MIN;
  int min_diff=INT_MAX;
  for(int i=0;i<n;){
    vector<int> arr;
    for(int j=0;j<size;j++,i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int max=*max_element(arr.begin(),arr.end());
    int min=*min_element(arr.begin(),arr.end());

    if(max-min>max_diff){
        max_diff=max-min;
    }
    if(max-min<min_diff){
        min_diff=max-min;
    }
 
  }
  //cout<<max_diff<<' '<<min_diff<<endl;

  cout<<max_diff-min_diff<<endl;
  
  
  return 0;
}