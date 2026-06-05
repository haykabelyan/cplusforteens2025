#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {0,1,2,3,4};
    std::vector<int> index = {0,1,2,2,1};
    std::vector<int> target;

    for(int i = 0; i<nums.size(); i++){
        target.insert(target.begin() + index[i], nums[i]);
    }

    for(int i = 0; i<target.size(); i++){
        std::cout << target[i];
    }
}