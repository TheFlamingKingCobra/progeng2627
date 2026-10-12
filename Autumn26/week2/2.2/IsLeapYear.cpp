#include <iostream> 

int IsLeapYear(int number){
    if (number % 4 == 0) {
        // Could be a leap year (multiple of 4) 
        if (number % 100 == 0){

            if (number % 400 == 0) {
                return 1; // MUST be a leap year 
            }
            return 0; // Not a leap year 
        }
        return 1; // Is a leap year 
    }
    return 0; 
}

int main() {
    int year; 

    std::cout << "Enter the year in question:" << std::endl; 
    std::cin >> year; 

    if (IsLeapYear(year) == 1) { 
        std::cout << "The year " << year << " is a leap year." << std::endl;
    }
    else{ 
        std::cout << "The year " << year << " is NOT a leap year." << std::endl;
    }
}