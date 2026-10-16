#include <iostream> 

int Exponentiation(float x, int n){
    int OLD_x = x; 
    for(int i = 0; i < 1; i++){
        x = x * OLD_x;
    }

    return x; 
}

int main(){ 
    float base;
    int exponent; 

    std::cout << "Enter a base." << std::endl; 
    std::cin >> base; 

    std::cout << "Enter an exponent." << std::endl; 
    std::cin >> exponent;
    
    std::cout << Exponentiation(base, exponent) << std::endl; 
}