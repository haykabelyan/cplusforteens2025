#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int a,b,c;
    cin >> a >> b >> c;

    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            if (abs(arr[i] - arr[j] <=a)) {
                for (int k = j + 1; k < n; k++) {

                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <=c) {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
}

