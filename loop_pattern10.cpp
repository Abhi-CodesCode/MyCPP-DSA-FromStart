//      1
//      21
//      321
//      4321
#include<iostream>
using namespace std;
int main(){
    /*
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=i;
        while(j>0){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    */
    //Another Way
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}