#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {13,25,83,77};
    std::vector<int> answer;

    std::int> answer;

    for(int n : nums){
        std::vector<int> digits;

        while(n > 0){
            digits.push_back(n % 10);
            n /= 10;
        }

        reverse(digits.begin(), digits.end());
        
        for(int digit : digits){
            res.push_back(digit);
        }
    }

    for(int ch : res){
        std::cout << ch << " ";
    }
}