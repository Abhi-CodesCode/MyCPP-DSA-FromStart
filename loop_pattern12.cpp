/*
ABCD
ABCD
ABCD
ABCD
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch = 'A'-1;
        for(int j=0;j<n;j++){
            ch=ch+1;
            cout<<ch;
        }
        cout<<endl;
    }
}