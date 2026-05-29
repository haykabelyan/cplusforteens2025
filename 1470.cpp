#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {2, 5, 1, 3, 4, 7};
    std::vector<int> ans = {};
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        ans.push_back(nums[i]);
        ans.push_back(nums[i + n]);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        std::cout << ans[i];
    }
}