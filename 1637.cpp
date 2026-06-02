#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> points(n, vector<int>(2));

    for (int i = 0; i < n; i++) {
        cin >> points[i][0] >> points[i][1];
    }

    vector<int> x;

    for (int i = 0; i < n; i++) {
        x.push_back(points[i][0]);
    }

    sort(x.begin(), x.end());

    int ans = 0;

    for (int i = 1; i < x.size(); i++) {
        ans = max(ans, x[i] - x[i - 1]);
    }

    cout << ans;
}