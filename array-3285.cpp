#include <iostream>
#include <vector>

int main(){
    std::vector<int> height = {1, 2, 3, 4, 5};
    std::vector<int> ans;
    int threshold = 2;

    for(int i = 1; i < height.size(); i++){
        if(height[i - 1] > threshold){
            ans.pushback(i);
        }
    }

    for(int i = 0; i < ans.size(); i++){
        std::cout << ans[i];
    }
}