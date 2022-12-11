#include<iostream>
using namespace std;

/*
    Pattern to make:
                    1111
                    2222
                    3333
                    4444
*/
int main(){
    int n,row=1,column=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(row<=n){
        while(column<=n){
            cout<<row;
            column++;
        }
        cout<<"\n";
        column=1;
        row++;
    }
    return 0;
}