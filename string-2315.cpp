#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;
    int cnt = 0;
    int inside = false;

    for(char ch : s){
        if(ch == '|'){
            inside = !inside;
        }
        else if(ch == '*' && !inside){
            cnt++;
        }
    }

    std::cout << cnt;

}