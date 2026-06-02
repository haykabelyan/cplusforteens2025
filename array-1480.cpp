#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> runningSum;
    int sum = 0;

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        runningSum.push_back(sum);
    }

    for(int n : runningSum){
        cout << n;
    }
}