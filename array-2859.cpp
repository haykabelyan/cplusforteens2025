#include <iostream>
#include <vector>
#include <bitset>

int main() {
    std::vector<int> nums = {5,10,1,5,2};
    
    int k = 1;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++){
        if(bitset<32>(i).count() == k){
            sum += nums[i];
        }
    }

    std::cout << sum;
}