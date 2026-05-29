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
    
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[i] > nums[j]) {
                count++;
            }
        }
        ans[i] = count;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

}