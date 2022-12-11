#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int bits;
    int num=0,i=0;
    cin>>bits;
    while(bits){
        if(bits%10>1){
            cout<<"Wrong Input"<<endl;
            return -1;
        }
        if(bits%10==1){
            num=pow(2,i)+num;
        }
        i++;
        bits/=10;
    }
    cout<<num<<endl;

}
