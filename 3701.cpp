#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1,3,5,7};
    int sum = 0;

    for(int i = 0;i < nums.size();i++)
    {
        if(i % 2 == 0)
        {
            sum += nums[i];
        }
        else
        {
            sum -= nums[i];
        }
    }
    
    std::cout << sum;

    return 0;
}