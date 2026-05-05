#include <iostream>
using namespace std;
#include <vector>

int main() {
    vector<int> nums;
    int k;
    cin >> k;
    int sum = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        cout << sum % k;    
}