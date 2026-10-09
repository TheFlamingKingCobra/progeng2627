#include <iostream> 

int main(){
    float length, width, perimeter, area; 

    std::cout << "Enter rectangle length: " << std::endl;
    std::cin >> length; 

    std::cout << "Enter rectangle width: " << std::endl;
    std::cin >> width; 

    std::cout << "Perimeter = " << 2 * length + 2 * width << std::endl; 
    std::cout << "Area = " << length * width << std::endl;
}