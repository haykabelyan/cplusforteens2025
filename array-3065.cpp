#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {2, 11, 10, 1, 3};

    int k = 10;
    int count = 0;

    for(int num : nums){
        if(num < k){
            count++;
        }
    }

    std::cout << count;

    return 0;
}