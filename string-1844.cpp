#include <iostream>

int main(){
    std::string s;
    std::cin >> s;

    for(int i = 1; i < s.size(); i += 2){
        int index = s[i] - '0';
        s[i] = s[i - 1] + index;
    }

    std::cout << s;
    return 0;
}