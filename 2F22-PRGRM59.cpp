#include <iostream>


using namespace std;

int main(){
    int num_list[] = {3, 2, -7, 19, -18};
    
    for (int i = 0; i<=4;++i){
        if (num_list[i] < 0){
          cout<< num_list[i]<<"\n";  
        }
        
    }

    system("pause");
    return 0;
}