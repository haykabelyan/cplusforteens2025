#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {2,1,3,5,6};
    int k = 5;
    int multiplier = 2;

    for(int n : nums){
        int min;

        if(nums[n] < mn){
            min = nums[n];
        }

        nums[min] *= multiplier;
    }

    for(int n : nums){
        std::cout << n;
    }
}