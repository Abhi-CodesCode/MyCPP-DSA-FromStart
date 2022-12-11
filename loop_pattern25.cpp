/*
1234
 234
  34
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
        for(int j=i+1;j<=n;j++){
            cout<<j;
        }
        cout<<endl;
    }

}