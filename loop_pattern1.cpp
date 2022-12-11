#include<iostream>
using namespace std;

/*
    Pattern to make:
                    ****
                    ****
                    ****
                    ****
*/
int main(){
    int n,row=0,column=0;
    cout<<"Enter a number : ";
    cin>>n;
    while(row<n){
        while(column<n){
            cout<<"*";
            column++;
        }
        cout<<"\n";
        column=0;
        row++;
    }
    return 0;
}