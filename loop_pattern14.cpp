/*
ABCD
BCDE
CDEF
DEFG
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<char(64+j+i-1);
        }
        cout<<endl;
    }
}