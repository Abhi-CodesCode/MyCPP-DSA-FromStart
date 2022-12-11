#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  vector<int> list;
  int n;
  int score=0;
  cin>>n;
  while(n--){
    int temp;
    cin>>temp;
    list.push_back(temp);
  }
  while(list.size()>0){
    //toms Turn
    score=score+max(*list.begin(),*list.end());
    if(list.front()>=list.back()){
        list.erase(list.begin());
    }
    else{
        list.erase(list.end());
    }
    if(list.front()>=list.back()){
        list.erase(list.begin());
    }
    else{
        list.erase(list.end());
    }

  }
  cout<<score<<endl;
  return 0;
}