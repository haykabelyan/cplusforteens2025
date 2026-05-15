#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for(int i=0 ;i < n; i++){
        std::cin >> nums[i];
    }

    std::vector<int> leftsum(n);
    std::vector<int> rightsum(n);
    std::vector<int> result(n);

    int s = 0;
    for(int i = 0;i < n; i++){
        for(int j = 0;j < i; j++){
            s += nums[j];
        }
        leftsum[i] = s;
    }
    
    int s = 0;
    for(int i = 0; i< n; i++){
        for(int j = i + 1; j < n; j++){
            s += nums[j];
        }
        rightsum[i] = s;
    }
        
    for(int i = 0; i < n; i++){
        result[i] = abs(leftsum[i] - rightsum[i]);
    }

    for(int c : result) {
        std::cout << c;
    }

    return 0;
}