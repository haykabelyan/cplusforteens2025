#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {4,3,2,1};

    for(int i = 0; i < nums.size();i++)
    {
        if(nums[i] % 2 == 0)
        {
            nums[i] = 0;
        }
        else
        {
            nums[i] = 1;
        }
    }
    
    sort(nums.begin(), nums.end());

    for(int el : nums)
    {
        std::cout << el;
    }
    
    return 0;
}