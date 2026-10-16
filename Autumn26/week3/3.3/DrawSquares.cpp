#include <iostream> 

int main(){
    int n;
    int i1 = 0;
    int i2 = 0;
    
    std::cout << "Enter an integer" << std::endl; 
    std::cin >> n;

    while(i1 < n){
        i1++; 

        while(i2 < n){
            i2++; 
            std::cout << "*";
        }

        i2 = 0; 
        std::cout << std::endl;
    }
}