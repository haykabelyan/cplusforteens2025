#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, threshold;
    cin >> n >> threshold;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    vector<int> stable;

    for (int i = 1; i < n; i++) {
        if (height[i - 1] > threshold) {
            stable.push_back(i);
        }
    }

    for (int i = 0; i < stable.size(); i++) {
        cout << stable[i] << " ";
    }

}