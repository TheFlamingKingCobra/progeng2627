#include <iostream>
#include <vector> 

int main(){
    int n, s; 
    std::vector<int> list; 
    std::vector<int> indicies;

    std::cout << "please enter n:" << std::endl; 
    std::cin >> n; 

    for (int i = 0; i < n; i++){
        int temp; 

        std::cout << "please enter a number:" << std::endl; 
        std::cin >> temp;

        list.push_back(temp);

    }

    std::cout << "please enter s:" << std::endl; 
    std::cin >> s;
    
    int count = 0; 

    for (int i = 0; i < list.size(); i++){
        if (list[i] == s){ 
            count++;
            indicies.push_back(i);
        }
    }

    if (count == 0){
        std::cout << "there are no occurrences of " << s << std::endl; 
    }
    else{
        std::cout << "there are " << count << " occurrences of " << s << " at indicies:" << std::endl; 

        for (int i = 0; i < indicies.size(); i++){
            std::cout << indicies[i] << std::endl; 
        }
    }


}