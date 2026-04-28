#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string s;
    int ones = std::count(s.begin(), s.end(), '1');
    int zeros = std::count(s.begin(), s.end(), '0');
    
    std::cout << std::string(ones - 1, '1') + std::string(zeros, '0') + std::string(1, '1');
   
    return 0;
}