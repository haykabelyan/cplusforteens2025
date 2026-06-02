#include <iostream>
#include <vector>
#include <algorithm>

int main(){
    std::vector<int> height = {1,2,3,4,5};
    std::vector<int> stable;
    int threshold = 2;

    for(int i = 1; i<height.size(); i++){
        if(height[i-1] > threshold){
            stable.push_back(i);
        }
    }

    for(int i = 0; i<stable.size(); i++){
        std::cout << stable[i] << " ";
    }
}