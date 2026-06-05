#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    vector<int> index(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> index[i];
    }

    vector<int> target;

    for (int i = 0; i < n; i++) {
        target.insert(target.begin() + index[i], nums[i]);
    }

    for (int i = 0; i < target.size(); i++) {
        cout << target[i] << " ";
    }
}