#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string s = "a1c1e1";
    std::string ans = "";

    for (int i = 1; i < s.size(); i += 2) {
            s[i] = s[i - 1] + (s[i] - '0');
        }
    
    std::cout << s << std::endl;
}