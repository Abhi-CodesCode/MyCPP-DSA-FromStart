/*
1111
 222
  33
   4
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        int space=i;
        while(space){
            cout<<" ";
            space--;
        }
        for(int j=i;j<n;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
}