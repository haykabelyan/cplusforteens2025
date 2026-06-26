#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> nums = {0,1,4,6,7,10};
    int diff = 3;
    int count = 0;

    for(int i = 0; i < nums.size() - 2;i++)
    {
        for(int j = 1; j < nums.size() - 1;j++)
        {
            for(int z = 2; z < nums.size();z++)
            {
                if(nums[j] - nums[i] == diff && nums[z] - nums[j] == diff)
                {
                    count++;
                }
            }
        }
    }
    std::cout << count;
    return 0;
}