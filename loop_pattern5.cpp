#include<iostream>
using namespace std;

/*
    Pattern to make:
                    123
                    456
                    789
*/
int main(){
    int n,i=1,count=1;
    cout<<"Enter a number : ";
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}