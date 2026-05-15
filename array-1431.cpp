#include <iostream>
#include <vector>

int main(){
    std::vector<int> candies = {2,3,5,1,3};
    std::vector<bool> res;
    int ExtraCandies = 3;

        int maxCandies = 0;
        for (int i = 0; i<candies.size(); i++){
            if (candies[i] > maxCandies) {
                maxCandies = candies[i];
            }
        }

        for(int i = 0; i<candies.size(); i++){
            if(candies[i] + ExtraCandies >= maxCandies){
                res.push_back(true);
            }
            else res.push_back(false);
        }

        for(int i = 0; i<res.size(); i++){
            std::cout << res[i]; 
        }
}