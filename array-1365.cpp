#include <iostream>
#include <vector>

int main(){
    std::vector<int> nums = {8,1,2,2,3};
    std::vector<int> count;
    int count1 = 0;

    for (int i = 0; i < nums.size(); i++) {
            int count1 = 0;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] < nums[i]) {
                    count1++;
                }
            }

            count.push_back(count1);
        }

        for(int i = 0; i<count.size(); i++){
            std::cout << count[i];
        }
}