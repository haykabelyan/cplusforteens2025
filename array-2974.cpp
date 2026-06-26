#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    std::vector<int> nums = {5,4,2,3};
    std::vector<int> res;

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i += 2) {

            res.push_back(nums[i + 1]);
            res.push_back(nums[i]);
        }

    return res;
    
}