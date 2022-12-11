#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v{3,6,9,2,1};
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;


    vector<int> v2(v);
    v2.push_back(7);
    for(auto i:v2){
        cout<<i<<" ";
    }cout<<endl;

    cout<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;



}