#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::vector<int>> points = {{8,7},{9,9},{7,4},{9,7}};
    std::vector<int> x;
    int count = 0;

    for(int i = 0; i<points.size(); i++){
            x.push_back(points[i][0]);
    }

    std::sort(x.begin(), x.end());

    int ans = 0;

    for (int i = 1; i < x.size(); i++) {
        ans = std::max(ans, x[i] - x[i - 1]);
    }

    std::cout << ans;
}