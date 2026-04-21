#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> words = {"alice","bob","charlie"};
    std::string s = "abc";
    std::string res = "";

    for(std::string el : words){
        res.push_back(el[0]);
    }

    return s == res;

}