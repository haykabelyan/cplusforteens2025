#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {1,2,3,4};
    int cnt = 0;

    for(int el : nums){
        if(el % 3 != 0){
            cnt++;
        }
    }

    std::cout << cnt;
}