#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> res;

    for (int i = 0; i < n; i++) {
        string s = to_string(nums[i]);
        for (char c : s) {
            res.push_back(c - '0');
        }
    }

    for (char ch : res) {
        cout << ch << " ";
    }


}