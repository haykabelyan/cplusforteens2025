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

    vector<int> res;

    for (int i = 0; i < n; i += 2) {
        int freq = nums[i];
        int val = nums[i + 1];

        for (int j = 0; j < freq; j++) {
            res.push_back(val);
        }
    }

    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}