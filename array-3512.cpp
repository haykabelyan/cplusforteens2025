#include <iostream>
#include <vector>

int main(){
    int k = 5;
    int sum = 0;
    std::vector<int> nums = {3, 9, 7};

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
    }

    std::cout << sum % k << std::endl;
}