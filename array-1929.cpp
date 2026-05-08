#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1, 2, 1};
    int n = nums.size();
    std::vector<int> ans;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
    }

    for (int i = 0; i < (2 * n); i++)
    {
        std::cout << ans[i];
    }

    return 0;
}