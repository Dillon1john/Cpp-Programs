#include <iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter Number for A: ";
    cin>>a;

    cout<<"Enter Number for B: ";
    cin>>b;

    if (a==b){
        cout<<"Both "<<a<<" and "<<b<<" are equal in value.";
    }
    else{
        if (a>b){
            cout<<"The greater value is "<<a;
        }
        else{
            cout<<"The greater value is "<<b;
        }
    }
    return 0;
}