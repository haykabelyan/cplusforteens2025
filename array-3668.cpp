#include <iostream>
#include <vector>

int main()
{
    std::vector<int> order = {3, 1, 2, 5, 4};
    std::vector<int> friends = {1, 3, 4};
    std::vector<int> res;

    for (int el : order)
    {
        for (int num : friends)
        {
            if (el == num)
            {
                res.push_back(el);
            }
        }
    }

    for (int num : res)
    {
        std::cout << num;
    }

    return 0;
}