#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector <int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> res;

    for (int num : nums) {
        vector<int> digits;

        while (num > 0) {
            digits.push_back(num % 10);
            num /= 10;
        }

        reverse(digits.begin(), digits.end());
        
        for (int digit : digits) {
            res.push_back(digit);
        }
    }
   

    for (int ch : res) {
        cout << ch << " ";
    }
}