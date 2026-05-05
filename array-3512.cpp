#include <iostream>
#include <vector>

int main(){
    int k = 5;
    int sum = 0;
    std::vector<int> nums = {3, 9, 7};

    for(int el : nums){
        sum += el;
    }

    std::cout << sum % k;
}