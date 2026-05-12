#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> accounts = {{1,2,3},{3,2,1}};
    int max = 0;

    for(std::vector<int> account : accounts){
        int sum = 0;

        for(int i = 0; i < account.size(); i++){
            sum += account[i];
        }

        if(sum > max){
            max = sum;
        }
    }

    std::cout << max;

    return 0;
}