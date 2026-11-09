#include <iostream> 
#include <string> 

int SwapText(std::string &text1, std::string &text2){
    std::string temp = text1; 
    text1 = text2; 
    text2 = temp; 
}

int main(){
    std::string text1, text2; 

    std::cin >> text1; 
    std::cin >> text2; 

    SwapText(text1, text2); 

    std::cout << text1 << std::endl; 
}