#include <iostream> 
#include <string> 

int main(){
    float temperature_in, temperature_out;
    std::string unit_in, unit_out;

    std::cout << "Enter a temperature with a valid unit" << std::endl; 
    std::cin >> temperature_in >> unit_in; 

    if (unit_in == "C" || unit_in == "c"){
        temperature_out = temperature_in * 1.8 + 32;
        unit_out = "F"; 
    }
    else if (unit_in == "F" || unit_in == "f"){
        temperature_out = (temperature_in - 32) / 1.8; 
        unit_out = "C";
    }
    else{
        std::cout << "error, unit not recognised" << std::endl; 
        return 1; 
    }
    
    std::cout << temperature_out << " " << unit_out << std::endl; 
    return 0;

    // For the "Removing duplicated lines", I thought it would be cleaner to return at different points so the print at the end would only happen once (without making a bool var)
}