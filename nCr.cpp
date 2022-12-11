#include<iostream>
using namespace std;
int fact(int num){
    int fact = 1;
    for(int i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int nCr(int n,int r){
    int numerator=fact(n);
    int denominator=fact(r)*(fact(n-r));
    return numerator/denominator;
}

int main(){
    int a,b;
    cout<<"Enter the values of n and r : ";
    cin>>a>>b;
    cout<<"The answer is "<<nCr(a,b)<<endl;
}