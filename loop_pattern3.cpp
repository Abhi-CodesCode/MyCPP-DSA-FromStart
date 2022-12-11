#include<iostream>
using namespace std;

/*
    Pattern to make:
                    1234
                    1234
                    1234
                    1234
*/
int main(){
    int n,row=1,column=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(row<=n){
        while(column<=n){
            cout<<column;
            column++;
        }
        cout<<"\n";
        column=1;
        row++;
    }
    return 0;
}