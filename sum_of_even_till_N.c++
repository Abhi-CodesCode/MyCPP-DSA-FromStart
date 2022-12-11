#include <iostream>
using namespace std;

int main(){

    int n,i=0,sum=0;
    cin>>n;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
cout<<"The sum of all even numbers from 1 to "<<n<<" is "<<sum<<endl;
}