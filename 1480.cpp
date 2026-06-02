#include <iostream>
#include <vector>

int main()
{

    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> ans;
    int sum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        sum = 0;
        for (int j = 0; j <= i; j++)
        {
            sum += nums[j];
        }
        ans.push_back(sum);
    }

    for (int el : ans)
    {
        std::cout << el;
    }

    return 0;
}