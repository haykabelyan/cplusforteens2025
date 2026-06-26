#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {0,1,4,6,7,10};
    int diff = 3;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = 0; j<nums.size(); j++){
            for(int k = 0; k<nums.size(); k++){
                if(((nums[j] - nums[i]) == diff) && ((nums[k] - nums[j]) == diff)){
                    count++;
                }
            }
        }
    }

    return count;
}