#include <iostream>
#include <vector>
#include <cmath>

int main() {
    std::vector<int> nums = {2,3,1};
    int count = 0;

    for (int i = 0; i < nums.size(); i++) {
        int start = max(0, i - nums[i]);

        for (int j = start; j <= i; j++) {
            count += nums[j];
        }
    }

    std::cout << count;
}