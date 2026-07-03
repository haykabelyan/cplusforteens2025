#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1,2,2,1};
    int k = 1;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = i + 1; j<nums.size(); j++){
            if(abs(nums[i] - nums[j]) == k){
                count++;
            }
        }
    }

    std::cout << count;
}