#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {-1,1,2,3,1};
    int target = 2;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            if(nums[i] + nums[j] < target){
                count++;
            }
        }
    }

    std::cout << count;
}