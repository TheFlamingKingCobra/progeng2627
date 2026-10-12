#include <iostream>
#include <string>

int main(){

    double length_in, length_out;
    std::string unit_in, unit_out;

    // we declare variables for the input and the output
    // the length is a number, the unit name is text

    const double mile_to_km = 1.609;
    // useful way to define constants

    std::cin >> length_in >> unit_in;
    // we don't print a prompt, we just read the input

    if(unit_in == "km"){
        unit_out = "mile";
        length_out = length_in / mile_to_km;
    }
    else{
        unit_out = "km";
        length_out = length_in * mile_to_km;
    }

    std::cout << length_out << " " << unit_out << std::endl;
}

// TESTED: 
// Works with km and "mile"
// If you give a wrong unit, it does indeed assume that it's miles (because not km) and then gives you an answer in km
// e.g. an input of 1 g still gives an output of 1.609 km 