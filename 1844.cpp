#include <iostream>

int main()
{
    std::string s = "a1c1e1";

    for(int i = 1;i < s.size(); i++)
    {
        if(s[i] >= 48 && s[i] <= 57)
        {
            s[i] = s[i-1] + (s[i] - '0');
        }
    }

    std::cout << s;

    return 0;
}