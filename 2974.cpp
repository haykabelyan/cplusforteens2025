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

    int n = nums.size();
        vector<int> arr;
        while (n>0) {
            auto min1 = min_element(nums.begin(), nums.end());
            int val1 = *min1;
            nums.erase(min1);

            auto min2 = min_element(nums.begin(), nums.end());
            int val2 = *min2;
            nums.erase(min2);

            arr.push_back(val2);
            arr.push_back(val1);

            n -= 2;
        }
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
    
}   