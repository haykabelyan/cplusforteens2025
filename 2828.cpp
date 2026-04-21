#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string words[n];
    string s;
    cin >> s;

    for (int i = 0; i<n;i++) {
        cin >> words[i];
        if (words[i][0] != s[i]) {
            return false;
        }
    }

    return true;



}