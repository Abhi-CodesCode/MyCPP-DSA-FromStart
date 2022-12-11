#include<iostream>
using namespace std;
int main(){

    int n,prime=true;
    cout<<"Enter a number to check if prime or not: ";
    cin>>n;
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<<"Not prime"<<endl;
            return 0;
        }
    }
    cout<<"prime"<<endl;
}