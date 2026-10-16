#include <iostream> 

int main(){
    int n; 
    int output = 1; 

    std::cout << "Enter a number" << std::endl; 
    std::cin >> n; 

    for (int i = n; i > 0; i--){
        output = output * i;
    }

    std::cout << output << std::endl; 
}