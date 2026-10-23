#include <iostream> 
#include <cmath> 

int main(){
    float x, total = 0; 
    int n; 

    std::cout << "Enter a base, x:" << std::endl; 
    std::cin >> x; 

    std::cout << "Enter the total number of iterations, n:" << std::endl; 
    std::cin >> n;  

    for (int i = 0; i < n; i++){
        total += std::pow(x, i + 1);
    }

    std::cout << total << std::endl; 
}

