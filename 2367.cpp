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

    int diff, count=0;
    cin >> diff;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (nums[j] - nums[i] == diff) {
                for (int k = j + 1; k < n; k++) {

                    if (nums[k] - nums[j] == diff) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
}

