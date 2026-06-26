#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {0, 1, 4, 6, 7, 10};
    int diff = 3;
    
    int cnt = 0;

    for(int i = 0; i < nums.size(); i++){
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                if(nums[j] - nums[i] == diff && nums[k] - nums[j] == diff){
                    cnt++;
                }
            }
        }
    }

    std::cout << cnt;

    return 0
}