#include <iostream> 

int main(){
    float money, exchangeRate;

    std::cout << "Enter an amount of money in GBP:" << std::endl; 
    std::cin >> money; 

    std::cout << "Enter the current exchange current rate from GBP to EUR" << std::endl; 
    std::cin >> exchangeRate; 

    std::cout << "Amount of EUR: " << money * exchangeRate << std::endl; 
}