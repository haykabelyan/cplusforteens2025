#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans;
    sort(nums.begin(), nums.end());
    for (int i = 1; i < n; i += 2) {
        ans.push_back(nums[i]);
        ans.push_back(nums[i - 1]);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

}