#include <iostream>
using namespace std;

int main(){
    int fin_sum = 0;
    int i = 19;
    do{
        if (i%2 == 0){
           fin_sum+=i; 
        }
        i+=1;
    }
    while(i<=21);

    cout<<fin_sum<<"\n";

    system("pause");
    return 0;
}