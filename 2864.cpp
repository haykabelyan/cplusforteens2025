#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int ones = count(s.begin(), s.end(), '1');
    int zeros = count(s.begin(), s.end(), '0');
    
    cout << string(ones-1, '1') + string(zeros, '0') + string(1, '1');
   
    return 0;

    
    
}