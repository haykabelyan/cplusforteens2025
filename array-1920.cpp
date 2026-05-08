#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = { 0, 2, 1, 5, 3, 4 }; 
    std::vector<int> res;

    for(int i = 0; i < nums.size();i++)
    {
        res.push_back(nums[nums[i]]);
    }

    for(int el : res)
    {
        std::cout << el;
    }
}