#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter number for A: ";
    cin >> a;

    cout<<"Enter number for B: ";
    cin >> b;

    cout<<"Enter number for C: ";
    cin >> c;
    
    int exp1 = a+b*c;
    
    cout<<"The value is: "<<exp1<<"\n";

    return 0;
}