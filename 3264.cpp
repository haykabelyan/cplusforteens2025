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

    int k, multiplier;
    cin >> k >> multiplier;

    for (int i = 0; i<k; i++) {
        int min = nums[0];
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] < min) {
                min = nums[j];
                index = j;
            }
        }
            
        nums[index]*=multiplier;
    }

    for (int x : nums) {
        cout << x << " ";
    }
}