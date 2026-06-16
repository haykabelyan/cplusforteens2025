#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1,2,3,4};
    std::vector<int> all;

    for(int i = 0; i<nums.size(); i+=2){
       all.insert(all.end(), nums[i], nums[i+1]);
    }

    return all;
}