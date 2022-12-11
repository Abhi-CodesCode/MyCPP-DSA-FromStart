#include<iostream>
using namespace std;
int fib_finder(int n){
    int t1=0,t2=1,ans=0;
    if(n==2){
        return 1;
    }
    for(int i=1;i<n-1;i++){
        ans=t2+t1;
        t1=t2;
        t2=ans;
    }
    return ans;
}
int main(){
    cout<<fib_finder(2)<<endl;
}