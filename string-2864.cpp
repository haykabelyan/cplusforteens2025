#include <iostream>
#include <string>
#include <algorithm>

int main(){
    std::string s = "010";
    int onecount = 0;

    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1'){
            onecount++;
        }
    }

    std::string result;

    for(int i = 0; i<onecount - 1; i++){
        result += '1';
    }

    for(int i = 0; i< s.size() - onecount; i++){
        result += '0';
    }

    result += '1';
    std::cout << s << std::endl;
}