#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums1 = {1, 3, 4};
    std::vector<int> nums2 = {1, 3, 4};

    int k = 1;
    int cnt = 0;

    for(int i = 0; i < nums1.size(); i++){
        for(int j = 0; j < nums2.size(); j++){
            if(nums1[i] % (nums2[j] * k) == 0){
                cnt++;
            }
        }
    }

    std::cout << cnt;
}