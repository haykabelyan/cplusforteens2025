#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i < s.size(); i += 2) {
        int index = s[i] - '0';
        s[i] = s[i - 1] + index;
    }

    cout << s;
}