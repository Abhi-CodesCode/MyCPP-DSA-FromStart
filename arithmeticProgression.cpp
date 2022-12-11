#include<iostream>
using namespace std;
int  AP(int a,int d,int n){
    int ans= a+(n-1)*d;
    return ans;
}
int main(){
    int n,d,first;
    cout<<"Enter first term: ";
    cin>>first;
    cout<<"Enter common difference: ";
    cin>>d;
    cout<<"Enter the term you want: ";
    cin>>n;
    cout<<endl<<"The "<<n<<"th term is "<<AP(first,d,n)<<endl;
}