#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<std::vector<int>> points = {{8,7}, {9,9}, {7,4}, {9,7}};
    std::vector<int> x;

    for(int i = 0; i < points.size(); i++){
        x.push_back(points[i][0]);
    }

    sort(x.begin(), x.end());

    int mx = 0;
    for(int i = 1; i < x.size(); i++){
        mx = std::max(mx, x[i] - x[i - 1]);
    }

    std::cout << mx;
}