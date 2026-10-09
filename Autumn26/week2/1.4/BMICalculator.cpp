#include <iostream> 
#include <cmath>

int main(){
    float weight, height; 

    std::cout << "Enter your weight in kg: " << std::endl; 
    std::cin >> weight; 

    std::cout << "Enter your height in m: " << std::endl; 
    std::cin >> height; 

    std::cout << "Your BMI is: " << weight / std::pow(height, 2);
}