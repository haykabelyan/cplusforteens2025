#include <iostream>
#include <vector>

int main(){
    std::vector<int> order = {3,1,2,5,4};
    std::vector<int> friends = {1,3,4};
    std::vector<int> all;

        for(int i = 0; i < order.size(); i++){
            for(int j = 0; j < friends.size(); j++){
                if(order[i] == friends[j]){
                    all.push_back(order[i]);
                    break;
                }
            }
        }

        for(int i = 0; i<all.size(); i++){
            std::cout << all[i] << std::endl;
        }
}