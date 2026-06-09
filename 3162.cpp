#include <iostream>
#include <vector>

int main()
{
    std::vector<int> nums1 = {1,3,4};
    std::vector<int> nums2 = {1,3,4};
    int k = 1;
    int count = 0;
    
    
    for(int el : nums1)
    {
        for(int le : nums2)
        {
            if(el % (le * k) == 0)
            {
                count++;
            }
        }
    }
    std::cout << count;
    return 0;
}