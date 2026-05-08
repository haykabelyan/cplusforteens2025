#include <iostream>
#include <vector>

int main()
{
    int count = 0;
    std::vector<int> nums = {1, 2, 3, 1, 1, 3};
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
    }

    std::cout << count;
    return 0;
}