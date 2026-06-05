#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 1, 3, 5, 6};
    int k = 5;
    int multiplier = 2;

    for (int i = 0; i < k; i++) {
        int min = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] < nums[min]) {
                min = j;
            }
        }

        nums[min] *= multiplier;
    }

    for (int i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << " ";
    }

    return 0;
}