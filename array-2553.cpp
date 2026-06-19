#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {13,25,83,77};
    std::vector<int> res;

    for (int i = 0; i < nums.size(); i++) {
        std::vector<int> digit;
        int num = nums[i];

        while (num > 0) {
            digit.push_back(num % 10);
            num /= 10;
        }

        std::reverse(digit.begin(), digit.end());

        for (int i = 0; i<digit.size(); i++) {
            res.push_back(digit[i]);
        }
    }

    for (int i = 0; i<res.size(); i++) {
        std::cout << res[i] << ' ';
    }
}