#include<iostream>
using namespace std;
int main(){
    int num,sum=0,product=1;
    cout<<"Enter a number: ";
    cin>>num;
    while(num){
        sum=sum+(num%10);
        product=product*(num%10);
        num=num/10;
    }
    cout<<product-sum<<endl;
    
}