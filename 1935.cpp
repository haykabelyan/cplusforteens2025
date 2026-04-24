#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, brokenLetters;
    getline(cin, text);
    cin >> brokenLetters;

    int res = 0;
    bool flag = true;
    string word = "";

    for (char ch1 : text) {
        if (ch1 == ' ') {
            if (flag) res++;
            flag = true;       
        } else {
            for (char ch2 : brokenLetters) {
                if (ch1 == ch2) {
                    flag = false;
                    break;
                }
            }
        }
    }

    if (flag) res++;
    
    cout << res;

}