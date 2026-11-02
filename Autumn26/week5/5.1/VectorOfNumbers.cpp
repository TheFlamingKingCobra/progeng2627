#include <iostream> 
#include <vector> 

int main(){
    std::vector<int> v; 

    int a, b, c; 

    std::cout << "Enter the first element:" << std::endl; 
    std::cin >> a; 

    std::cout << "Enter the second element:" << std::endl; 
    std::cin >> b; 

    std::cout << "Enter the third element:" << std::endl; 
    std::cin >> c; 
    
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);

    std::cout << v[a] * (v[b] + v[c]) << std::endl; 
}