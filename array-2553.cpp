#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {13,25,83,77};
    std::vector<int> answer;

    for(int n : nums){
        std::string s = std::to_string(n);

        for(char c : s) {
            answer.push_back(c - '0');
        }
    }

    for(int digit : answer){
        std::cout << digit <<;
    }
}