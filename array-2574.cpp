#include <iostream>
#include <vector>
#include <cmath>

int main() {

    std::vector<int> nums = {10,4,8,3};
    std::vector<int> leftsum;
    std::vector<int> rightsum;
    std::vector<int> answer;

    int left = 0;
    for (int i = 0; i < nums.size(); i++) {
        leftsum.push_back(left);
        left += nums[i];
    }

    int right = 0;
    for (int i = nums.size() - 1; i >= 0; i--) {
        rightsum.insert(rightsum.begin(), right);
        right += nums[i];
    }

    for (int i = 0; i < nums.size(); i++) {
        answer.push_back(abs(leftsum[i] - rightsum[i]));
    }

    for (int x = 0; x<answer.size(); x++) {
        std::cout << x << " ";
    }
}