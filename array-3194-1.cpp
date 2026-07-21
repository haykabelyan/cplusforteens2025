#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {7,8,3,4,15,13,4,1};
    std::vector<double> averages;

    std::sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() / 2; i++) {
        double x = (nums[i] + nums[nums.size() - 1 - i]) / 2.0;
        averages.push_back(x);
    }

    double minaverage = averages[0];

    for (int i = 1; i < averages.size(); i++) {
        if (averages[i] < minaverage) {
            minaverage = averages[i];
        }
    }

    std::cout << minaverage << std::endl;
}