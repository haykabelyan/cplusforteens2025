#include <iostream>
#include <vector>


int main() {
    std::vector<std::vector<int>> grid = {{9,9,8,1}, {5,6,2,6}, {8,2,6,4}, {6,2,2,2}};

    std::vector<std::vector<int>> result;
        for(int i = 0; i < grid.size() - 2; i++) {
            std::vector<int> row;
            for(int j = 0; j < grid[0].size() - 2; j++) {
                int mx = 0;
                for(int n = i; n <= i + 2; n++) {
                    for(int m = j; m <= j + 2; m++) {
                        if(grid[n][m] > mx) {
                            mx = grid[n][m];
                        }
                    }
                }
                row.push_back(mx);
            }
            result.push_back(row);
        }

    return result;
}
