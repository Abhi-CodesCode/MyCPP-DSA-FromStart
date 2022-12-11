#include<iostream>
using namespace std;
void intersection(int arr1[],int size1,int arr2[],int size2){
    cout<<"Intersection"<<endl;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                arr2[j]=-112231;
                break;
            }
        }
    }
    cout<<endl;
}
int main(){
    int arr1[100];
    int size1;
    cout<<"Enter size of array 1: ";
    cin>>size1;
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    int arr2[100];
    int size2;
    cout<<"Enter size of array 2: ";
    cin>>size2;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }

    for(int i=0;i<size1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl<<endl;
    
    for(int i=0;i<size2;i++){
        cout<<arr2[i]<< " ";
    }
    cout<<endl<<endl;
    intersection(arr1,size1,arr2,size2);
}