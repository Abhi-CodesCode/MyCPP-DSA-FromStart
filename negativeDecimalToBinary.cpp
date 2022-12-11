#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,check=32,i=0;
    long long int bit=0;
    cin>>num;
    if(num>=0){
        cout<<"Wrong Input";
        return -1;
    }
    num=0-num;
    while(--check){
        int digit=num&1;
        bit=!digit*pow(10,i)+bit;
        i++;
        num=num>>1;
    }
    cout<<bit<<endl;
}