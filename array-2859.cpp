#include <iostream>
#include <vector>
#include <bitset>

int main() {
    std::vector<int> nums = {5,10,1,5,2};
    int k = 1;
    int ans = 0;

    for(int i = 0; i<nums.size(); i++){
        if(bitset<32>(i).count() == k){
            ans+=nums[i];
        }
    }

    std::cout << ans;
}