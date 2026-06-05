#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {2,11,10,1,3};
    int k = 10;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        if(nums[i] < k){
            count++;
        }
    }

    std::cout << count;
}