#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1,2,3,4};
    std::vector<int> sum;

    int count = 0;

    for(int i = 0; i < nums.size(); i++) {
        count += nums[i];
        sum.push_back(count);
    }

    for(int i = 0; i<sum.size(); i++){
        std::cout << sum[i];
    }
}