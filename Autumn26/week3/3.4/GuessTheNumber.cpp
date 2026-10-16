// it says guess but WE are using binary search 😂

#include <iostream> 
#include <string> 

int main(){
    int upper, lower; 

    std::cout << "Enter a lower bound" << std::endl; 
    std::cin >> lower; 

    std::cout << "Enter a upper bound" << std::endl; 
    std::cin >> upper; 

    while(true){
        int guess = lower + (upper - lower) / 2; 
        std::string response; 
        
        std::cout << "Is your number " << guess << "?" << std::endl; 
        std::cin >> response; 
        
        if (response == "higher" || response == "Higher"){
            lower = guess; 
        }
        else if (response == "lower" || response == "Lower"){
            upper = guess; 
        }
        else if (response == "yes" || response == "Yes"){
            std::cout << "Yay!" << std::endl; 
            break;
        }
        else{
            std::cout << "Please enter a valid response" << std::endl; 
        }

    }
}