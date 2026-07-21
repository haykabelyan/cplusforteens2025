#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1,15,6,3};
    int element = 0; 
    int digit = 0;

        for (int num : nums) {
            element += num; 

            int temp = num;
            while (temp > 0) {
                digit += temp % 10;
                temp /= 10;
            }
        }

        return std::abs(element - digit);
}
