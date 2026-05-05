#include <iostream>

int main(){
    int k = 5;
    int nums[] = {3, 9, 7};
    int sum = 0;

    for(int el : nums){
        el += sum;
    }

    std::cout << sum % k;
}