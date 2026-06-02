#include <iostream>
#include <vector>

int main()
{
    std::vector<int> height = {1, 2, 3, 4, 5};
    int threshold = 2;
    std::vector<int> ye;

    for (int i = 0; i < height.size() - 1; i++)
    {
        if (height[i] > threshold && height[i] < height[i+1])
        {
            ye.push_back(height[i]);
        }
    }

    for (int el : ye)
    {
        std::cout << el;
    }
    return 0;
}