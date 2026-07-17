#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {7,8,3,4,15,13,4,1};
    std::vector<double> averages;

    std::sort(nums.begin(), nums.end());

    while(nums.size() > 1) {
        int minElement = nums.front();     
        int maxElement = nums.back();       
        
        averages.push_back((minElement + maxElement) / 2.0);
        
        nums.pop_back(); 
        nums.erase(nums.begin());  
    }

    double minAverage = *std::min_element(averages.begin(), averages.end());
    
    std::cout << minAverage << std::endl;

    return 0;
}
