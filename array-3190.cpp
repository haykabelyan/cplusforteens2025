#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums = {1,2,3,4};
    int count = 0;

    for(int el : nums)
    {
        if(el % 3 != 0)
        {
            count++;
        }
        
    }

    std::cout << count;
}