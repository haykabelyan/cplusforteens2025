#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {1,2,1};
    std::vector<int> ans;

    for(int i = 0; i<nums.size(); i++){
        ans.push_back(nums[i]);
    }
    for(int i = 0; i<nums.size(); i++){
        ans.push_back(nums[i]);
    }

    for(int i = 0; i<ans.size(); i++){
        std::cout << ans[i] << std::endl;
    }

}