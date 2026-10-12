#include <iostream> 

int main(){
    int remainder, number; 

    std::cout << "Enter a number" << std::endl; 
    std::cin >> number; 

    remainder = number % 3; 

    if (remainder == 0) {
        std::cout << "The number " << number << " is a multiple of 3." << std::endl; 
    } 
    else { 
        std::cout << "The number " << number << " is NOT a multiple of 3." << std::endl; 
    }
}