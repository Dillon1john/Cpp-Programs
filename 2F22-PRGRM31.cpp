#include <iostream>
using namespace std;

int main(){
    int fin_sum = 0;
    int i = 1;
    while(i<=21){
        if (i%5 == 0){
           fin_sum+=i; 
        }
        i+=1;
        }

    cout<<fin_sum<<"\n";

    system("pause");
    return 0;
}