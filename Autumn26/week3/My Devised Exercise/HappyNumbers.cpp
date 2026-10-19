// Goal: Write a program that determines whether a number is a happy number. 
// Happy Number: "A positive integer that eventually reaches 1 when you repeatedly replace the number with the sum of the squares of its digits". Definition from: https://www.mathwords.com/h/happy_number.htm (19/10/2026)

// Solution: 
#include <iostream> 
#include <cmath>  

int Digits(int n){
    // To find the number of digits of an integer 
    int i = 1;
    while(n >= 10){
        n = n / 10; 
        i++; 
    }

    return i;
}

int SumOfSquaredDigits(int number){ 
    int digits = Digits(number); // Don't necessarily need a function for this but it looks easier to read
    int sumOfSquaredDigits = 0; 

    for (; digits > 1; digits--){ // I should've extracted digits bottom-up, top-down is more inefficient / prone to errors but was more fun to write in the moment
        int divisor = std::pow(10, digits - 1);
        int remainder = number % divisor; 

        sumOfSquaredDigits += std::pow(((number - remainder) / divisor), 2);
        number = remainder;
    }

    sumOfSquaredDigits += number * number; // The last and final (single) digit won't work in the above loop (10^0 = 1 but 1 is a factor of everything so the logic breaks down)

    return sumOfSquaredDigits; 
}

int main(void){
    int n;

    std::cout << "Enter a positive integer" << std::endl; 
    std::cin >> n; 

    if (!n || n <= 0) { // !n is in case someone inputs, say, a string (as n would evaluate to false if not an int)
        std::cout << "Please enter a positive integer." << std::endl;
        return 2;
    }

    int sumOfSquaredDigits = n; 

    while(sumOfSquaredDigits != 4){ // 4 is an unhappy number. Furthermore, it is proven that all unhappy numbers reach 4 in their cycle (they eventually get stuck in an 8-number cycle). Therefore, if the sum is 4 at anytime, n is unhappy. 

        sumOfSquaredDigits = SumOfSquaredDigits(sumOfSquaredDigits); // You don't strictly need to use a function

        if (sumOfSquaredDigits == 1){ 
            std::cout << n << " is a happy number!" << std::endl; 
            return 0;
        }

    }

    std::cout << n << " is not a happy number. " << std::endl;  
    return 1; 
}

// Happy numbers to try: 1, 7, 10, 13, 19, 23, 28 
// (1 is a good edge case to try)

// Unhappy numbers: 2, 3, 4, 5, 6, 8, 9, 11, 12, 14