#include <iostream>


using namespace std;

int main(){
    int num_list[] = {3, 2, -7, 19, -18};
    int i = 0;
    do{
        if (num_list[i]%2 != 0 && num_list[i] <= 14 && num_list[i] >= 5){
          cout<< num_list[i]<<"\n";  
        }
        ++i;
    }
    while(i<=4);
    // system("pause");
    return 0;
}