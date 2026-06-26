#include <iostream>
#include <vector>

int main(){

    std::vector<int> nums = {5, 4, 2, 3};
    std::vector<int> arr;

    sort(nums.begin(),nums.end());

    for(int i = 1; i < nums.size(); i+=2){
        arr.push_back(nums[i]);
        arr.push_back(nums[i - 1]);
    }

    for(int n : arr){
        std::cout << n;
    }

    return 0;
}