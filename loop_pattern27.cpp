/*
1234554321
1234**4321
123****321
12******21
1********1
*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        //first 12345 pattern
        int first=0;
        while(first<=n-i-1){
            first++;
            cout<<first;
        }
        //star pattern
        int star=i;
        while(star){
            cout<<"**";
            star--;
        }
        //last 54321 pattern
        int last=n-i;
        while(last>0){
            cout<<last;
            last--;
        }
        cout<<endl;
        i++;
    }
}