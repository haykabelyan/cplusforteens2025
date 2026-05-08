#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main()
{
    std::string text = "hello world";
    std::string brokenLetters = "ad";

    vector<string> text_arr;
    stringstream ss(text); // "hello world"
    string word;
    while (ss >> word)
    {
        text_arr.push_back(word);
    }

    int count = 0;
    for (string word : text_arr)
    {
        bool is_valid = true;
        for (char letter : word)
        {
            if (brokenLetters.find(letter) != string::npos)
            {
                is_valid = false;
                break;
            }
        }
        if (is_valid)
        {
            count++;
        }
    }
    return count;
}
