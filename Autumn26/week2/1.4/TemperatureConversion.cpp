#include <iostream> 

int main(){
    float c, f; 

    std::cout << "Enter a temperature in celcius:" << std::endl; 
    std::cin >> c; 

    f = c * 9/5.0 + 32;
    std::cout << "Amount in farenheit: " << f << std::endl; 
}