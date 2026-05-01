#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    string res;
    for (char c : s) {
        if (isdigit(c)) {
            if (!res.empty()) {
                res.pop_back();
            }
        } else {
            res += c;
        }
    }

    cout << res;
}