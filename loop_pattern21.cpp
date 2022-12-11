/*
****
 ***
  **
   *
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
        int star=n-i;
        while(star){
            cout<<"*";
            star--;
        }
        cout<<endl;
    }
}