#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {2,1,3,5,6};
    int k = 5;
    int multiplier = 2;

    for(int i = 0; i < nums.size(); i++){
        int minindex;

        for(int j = 0; j < nums.size(); j++){
            if(nums[j] < nums[minIndex]){
                minIndex = j;
            }
        }

        nums[minIndex] *= multiplier;
    }

    for(int n : nums){
        std::cout << n;
    }

}