#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;
    std::string res = "";

    for(char c : s){
        if(isalpha(c)){
            res.push_back(c);
        }

        else if(isdigit(c)){
            res.pop_back();
        }
    }

    std::cout << res;
    return 0;
}