#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int sum = 0;

    for (int i : nums)
            sum += i;

    if (sum % 2 == 0)
        cout << nums.size() - 1;
    else
        cout << 0;;

    return 0;
}
