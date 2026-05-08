#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {0,1,1,0};
    std::vector<int> ans;

    sort(nums.begin(), nums.end());
    
    for(int i = 0; i<nums.size() + 1; i++){
        if(nums[i] == nums[i+1]){
            ans.push_back(nums[i]);
        }
    }

    for(int i = 0; i<ans.size(); i++){
        std::cout << ans[i] << std::endl;
    }
}