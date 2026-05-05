#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {0,2,1,5,3,4};
    std::vector<int> nums1 = {};

    for(int i = 0; i<nums.size(); i++){
        nums1.push_back(nums[nums[i]]);
    }

    for(int i = 0; i<nums1.size(); i++){
        std::cout << nums1[i] << std::endl;
    }
}