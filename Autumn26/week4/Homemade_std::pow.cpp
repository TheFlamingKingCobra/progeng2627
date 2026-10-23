#include <iostream>
#include <cmath> 

double mypow(double base, int exp){
    double result = 1; 

    for (int i = 0; i < std::abs(exp); i++){
        result = result * base; 
    }

    if (exp < 0){
        result = 1 / result; 
    }

    return result;
}

int main(){
    // we test examples with integer (and non-negative) exponent

    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
}