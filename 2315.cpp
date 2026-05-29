#include <iostream>

int main()
{
    std::string s = "l|*e*et|c**o|*de|";
    int flag = 0;
    int count = 0;

    for(int i = 0;i < s.size();i++)
    {
        if(s[i] == '|')
        {
            flag++;
        }

        if(s[i] == '*' && flag % 2 == 0)
        {
            count++;
        }
    }

    std::cout << count;

    return 0;
}