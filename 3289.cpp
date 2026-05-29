#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {0, 1, 1, 0};
    std::vector<int> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                ans.push_back(nums[i]);
            }
        }
    }

    for (int el : ans)
    {
        std::cout << el;
    }

    return 0;
}