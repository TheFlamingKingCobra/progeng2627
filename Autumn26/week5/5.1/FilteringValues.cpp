#include <iostream> 
#include <vector> 

int main(){
    int n, t; 
    std::vector<int> list; 

    std::cout << "Enter an integer n:" << std::endl; 
    std::cin >> n; 

    for (int i = 0; i < n; i++){ 
        int temp;
        std::cin >> temp; 
        list.push_back(temp);
    }

    std::cout << "Enter an integer t:" << std::endl; 
    std::cin >> t; 

    std::cout << "Below are the numbers in the vector that are less than t" << std::endl; 

    for (int i = 0; i < list.size(); i++){
        if (list[i] < t) {
            std::cout << list[i] << std::endl; 
        }
    }
}