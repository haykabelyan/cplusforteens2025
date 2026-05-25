#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> grid = {
        {9, 9, 8, 1},
        {5, 6, 2, 6},
        {8, 2, 6, 4},
        {6, 2, 2, 2}
    };

    int n = grid.size();

    std::vector<std::vector<int>> maxLocal;

    for(int i = 0; i < n - 2; i++){
        std::vector<int> row;

        for(int j = 0; j < n - 2; j++){
            int mx = 0;

            for(int x = i; x < i + 3; x++){
                for(int y = j; y < j + 3; y++){
                    if(grid[x][y] > mx){
                        mx = grid[x][y];
                    }

                }
            }

            row.push_back(mx);
        }

        maxLocal.push_back(row);
    }

    std::cout << maxLocal;
}