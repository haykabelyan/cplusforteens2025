#include <iostream>
#include <vector>

int main(){
    std::vector<int> hours = {0,1,2,3,4};

    int target = 2;
    int cnt = 0;

    for(int i = 0; i < hours.size(); i++){
        if(hours[i] >= target){
            cnt++;
        }
    }

    std::cout << cnt;

    return 0;
}