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

    vector<int> ans;

    for (int num : nums) {
        int found = -1;

        for (int x = 0; x < num; x++) {
            if ((x | (x + 1)) == num) {
                found = x;
                break;
            }
        }

        ans.push_back(found);
    }

    for (int x : ans) {
        cout << x << " ";
    }

}
