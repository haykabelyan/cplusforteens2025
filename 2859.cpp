#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int k;
    cin >> k;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (bitset<32>(i).count() == k) {
            sum += nums[i];
        }
    }

    cout << sum;
}
