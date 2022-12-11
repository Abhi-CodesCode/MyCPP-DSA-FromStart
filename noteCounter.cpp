#include<iostream>
using namespace std;
int main(){
    int amount;
    int note=100,notes_100=0,notes_50=0,notes_20=0,notes_5=0,notes_1=0;
    cout<<"Enter the amount: ";
    cin>>amount;
        switch (note)
        {
        case 100:
            while(amount>=100){
                amount=amount-100;
                notes_100++;
            }
        case 50:
            while(amount>=50){
                amount=amount-50;
                notes_50++;
            }
        case 20:
            while(amount>=20){
                amount=amount-20;
                notes_20++;
            }
        case 5:
            while(amount>=5){
                amount=amount-5;
                notes_5++;
            }
        case 1:
            while(amount>=1){
                amount=amount-1;
                notes_1++;
            }
        cout<<"Number of 100 notes: "<<notes_100<<endl;
        cout<<"Number of 50 notes: "<<notes_50<<endl;
        cout<<"Number of 20 notes: "<<notes_20<<endl;
        cout<<"Number of 5 notes: "<<notes_5<<endl;
        cout<<"Number of 1 notes: "<<notes_1<<endl;
        }
    }