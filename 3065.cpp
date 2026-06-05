#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i<n;i++) {
        cin >> nums[i];
    }

    int k, count=0;
    cin >> k;

    for (int i = 0; i<n;i++) {
        if (nums[i] < k) {
            count++;
        }
    }

    cout << count;

}