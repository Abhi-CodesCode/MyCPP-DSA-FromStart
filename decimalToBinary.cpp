#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num,bit=0,i=0;
    cin>>num;
    while(num){
        int digit = num&1;
        bit=digit*pow(10,i)+bit;
        i++;
        num=num>>1;
    }
    cout<<bit<<endl;
}