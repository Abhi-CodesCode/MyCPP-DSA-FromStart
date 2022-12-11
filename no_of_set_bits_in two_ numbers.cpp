#include<iostream>
using namespace std;

int bit1_counter(int num){
    int count=0;
    while(num){
        if(num&1){
            count++;
        }
        num=num>>1;
    }
    return count;
}
int main(){
    int a,b;
    cout<<"enter two numbers"<<endl;
    cin>>a>>b;
    cout<<(bit1_counter(a)+bit1_counter(b))<<endl;
}