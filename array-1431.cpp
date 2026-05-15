#include <iostream>
#include <vector>

int main(){
    std::vector<int> candies = {2,3,5,1,3};
    
    int extraCandies = 3;
    int mx = candies[0];

    for(int n : candies){
        if(candies[n] > mx){
            mx = candies[n];
        }
    }

    for(int n : candies){
        if(candies[n] + extraCandies >= mx){
            std::cout << "true";
        } 
        else{
            std::cout << "false";
        }
    }

    return 0;
}