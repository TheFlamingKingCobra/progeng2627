#include <iostream> 

int Swap(double &no1, double &no2){
    double temp = no1; 
    no1 = no2; 
    no2 = temp; 
}

void sort_three_numbers(double& s1, double& s2, double& s3){
    if (s1 > s2){
        Swap(s1, s2);
    }

    if (s2 > s3){
        Swap(s2, s3);
    }

    if (s1 > s2){
        Swap(s1, s2);
    }
}

int main(){
    double s1, s2, s3; 

    std::cin >> s1;
    std::cin >> s2; 
    std::cin >> s3;  

    sort_three_numbers(s1, s2, s3);

    std::cout << s1 << std::endl << s2 << std::endl << s3 << std::endl; 
}