#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {3,0,1,1,9,7};
    int a = 7;
    int b = 2;
    int c = 3;
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        for(int j = i+1; j<nums.size(); j++){
            for(int k = j+1; k<nums.size(); k++){
                if(( abs(nums[i] - nums[j]) <= a) || (abs(nums[j] - nums[k]) <= b) || (abs(nums[i] - nums[k]) <= c)){
                    count++;
                }
            }
        }
    }
    
    std::cout << count;
}