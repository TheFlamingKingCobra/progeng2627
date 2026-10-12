// WARNING: infinite loop!
// don't run this program if it's not the right time
// to have an infinite loop running on your computer!

// depending on the tools you are using this may crash 
// your development environment, your browser, other programs
// or the whole operating system

// before you run this program, make sure that all your work is saved
// that you know how to stop a program manually etc

#include <iostream>

int main(){
    int n, counter = 0;

    std::cin >> n;

    while(counter < n){
        std::cout << "hello" << std::endl;

        break; // I added this to prevent the infinite loop because I don't want to accidentally run it again
    }
} 


// GOOD LUCK TO MY COMPUTER 
// ctrl c ready...
// yeah that was fun 