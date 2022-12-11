/*
   1
  121
 12321
1234321   
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        int space=n-i;
        int j;
        while(space){
            cout<<" ";
            space--;
        }
        for(j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=i-1;k>0;k--){
            cout<<k;
        }
        cout<<endl;
    }
}