#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int n = 4;
    std::vector<std::vector<int>> grid = {{9, 9, 8, 1}, 
                                          {5, 6, 2, 6}, 
                                          {8, 2, 6, 4}, 
                                          {6, 2, 2, 2}};

    std::vector<std::vector<int>> neo;
    for (int i = 0; i < grid.size() - 2; i++)
    {
        neo.push_back({});
        for (int j = 0; j < grid.size() - 2; j++)
        {
            neo[i].push_back(std::max({grid[i][j], grid[i][j+1], grid[i][j+2], 
                grid[i+1][j], grid[i+1][j+1], grid[i+1][j+2],
                grid[i+2][j], grid[i+2][j+1], grid[i+2][j+2]}));
            
        }
    }

    for (int i = 0; i < neo.size(); i++)
    {
        for (int j = 0; j < neo.size(); j++)
        {
            std::cout << neo[i][j] << std::endl;
        }
    }
}