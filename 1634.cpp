#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<std::vector<int>> points = {{8,7},{9,9},{7,4},{9,7}};
    std::vector<int> ans;

    for(int i = 0; i < points.size();i++)
    {
        ans.push_back(points[i][0]);
    }

    sort(ans.begin(), ans.end());

    int max = 0;
    for(int i = 1;i < ans.size();i++)
    {
        if((ans[i] - ans[i-1]) > max)
        {
            max = ans[i] - ans[i-1];
        }
    }

    std::cout << max;
    return 0;
}