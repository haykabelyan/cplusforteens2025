#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> result;

    for(int i = 0; i < nums.size(); i += 2){
        int freq = nums[i];
        int val = nums[i + 1];

        for(int j = 0; j < freq; j++){
            result.push_back(val);
        }
    }

    for(int x : result) {
        std::cout << x;
    }
}