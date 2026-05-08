#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {1,3,5,7};
    int count = 0;

    for(int i = 0; i<nums.size(); i++){
        if(i % 2 == 0){
            count += nums[i];
        }
        else if(i % 2 != 0){
            count -= nums[i];
        }
    }

    std::cout << count << std::endl;
    
}