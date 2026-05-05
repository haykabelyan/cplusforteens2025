#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
        if (nums[i] %3 != 0) {
            count++;
        }
    }

    cout << count;

}