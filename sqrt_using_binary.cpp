#include<iostream>
using namespace std;

int sqrtBinary(int n){//Simple square root without precision

    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;
    long long int ans;

    while(s<=e){
        
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
        mid=s+(e-s)/2;

    }
    return ans;

}

double morePrecise(int n,int precision,int temp){//using doubles everywhere for precision
    double factor=1;//this factor will be the iterator increasing value of my answer to get better precise answer
    double ans=temp;

    for(int i=0;i<precision;i++){
        factor=factor/10;

        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }

    return ans;
}
int main(){
    int n;
    cout<<"Enter the number whose square root you want: ";
    cin>>n;
    cout<<sqrtBinary(n)<<endl;
    cout<<morePrecise(n,3,sqrtBinary(n))<<endl;
}