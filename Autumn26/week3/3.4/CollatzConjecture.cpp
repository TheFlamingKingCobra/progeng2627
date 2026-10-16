#include <iostream> 

int main(){
    int n;
    int steps = 0; 

    std::cout << "Enter an integer" << std::endl; 
    std::cin >> n; 

    int max = n; 

    while (n != 1){ 
        steps++; 

        if (n % 2 == 0) {
            n = n/2; 
        }
        else {
            n = 3 * n + 1;
        }

        if (n > max){
            max = n; 
        }

    }

    std::cout << "Steps tacken: " << steps << std::endl; 
    std::cout << "Maximum intermediate value: " << steps << std::endl; 
}