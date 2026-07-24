#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = 0;

        for (int num : nums) {
            if (num % 2 == 0) {
                ans |= num;
            }
        }

    cout << ans;
}