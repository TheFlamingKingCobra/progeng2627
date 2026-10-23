#include <iostream>

int myfactorial(int in){

    int factorial = 1; 
    // variable that will store the result

    // compute the factorial of in
    // so that the result is stored in variable fact
    for (int i = 1; i <= in; i++){
        factorial = factorial * i; 
    } 

    return factorial;
    // return the result
    // we *do not print* anything in the function
}

int main(){
    int n; 
    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    std::cout << "factorial of " << n << ": " << myfactorial(n) << std::endl;
}