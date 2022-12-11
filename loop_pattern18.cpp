/*
D
DC
DCB
DCBA
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char ch='A';
    for(int i=0;i<=n;i++){
        for(int j=n-1;j>=n-i;j--){
            cout<<char(ch+j);
        }
        cout<<endl;
    }
}