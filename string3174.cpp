#include <iostream>
#include <string>
int main(){
    std::string s = "abc";
    std::string res;
    for(int i = 0; i<s.size(); i++){
        if(isalpha(s[i])){
            res+=s[i];
        }
        else if(isdigit(s[i])){
            res.pop_back();
        }
    }
    std::cout << res << std::endl;
}