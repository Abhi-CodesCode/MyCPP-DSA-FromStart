//      1
//      23
//      345
//      4567
//      56789
#include<iostream>
using namespace std;
int main(){
    int n,i=1,k=0;
    cin>>n;
    while(i<=n){
        int j=1;
        
        while(j<=i){
            cout<<j+k;
            j++;
        }
        cout<<endl;
        i++;
        k++;
    }
}