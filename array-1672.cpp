#include <iostream>
#include <vector>
#include <numeric>

int main(){
    std::vector<std::vector<int>> accounts = {{1, 2, 3},{3, 2, 1}};
    int max = 0;

    for(int i = 0; i<accounts.size(); i++){
        int total = std::accumulate(accounts[i].begin(), accounts[i].end(), 0);
        if(total > max){
        max = total;
        }
    }

    std::cout << max;
}