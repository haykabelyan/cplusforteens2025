#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {8, 1, 2, 2, 3};
    std::vector<int> ans;

    for (int el : nums)
    {
        int sm = 0;
        for (int le : nums)
        {
            if (el > le)
            {
                sm++;
            }
        }
        ans.push_back(sm);
    }
    for (int el : nums)
    {
        std::cout << el;
    }
}