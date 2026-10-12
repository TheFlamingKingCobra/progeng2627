#include <iostream>

int main(){
    int n, i = 0;

    std::cin >> n;

    // the following line begins a while loop
    // the while loop has a condition in parentheses,
    // if the condition is true, then we enter the loop 
    // and execute the instructions inside
    // otherwise the execution goes past the loop

    while(i < n){
        std::cout << "hello" << std::endl;
        i = i + 1;
    }
}