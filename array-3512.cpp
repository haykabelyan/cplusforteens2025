#include <iostream>

int main()
{
    int nums[] = {3,9,7}; 
    int k = 5;
    int sum = 0;

    for(int el : nums)
    {
        sum += el;
    }

    std::cout << sum;
    
}