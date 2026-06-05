#include <algorithm>
using namespace std;

int main() {
    vector<int> nums = {2,1,3,5,6};
    int k = 5;
    int multiplier = 2;

    while(k--){    
        int mn_index = min_element(nums.begin(), nums.end()) - nums.begin();
        nums[mn_index] *= multiplier;
    }

    return nums;
}