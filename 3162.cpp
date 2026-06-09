#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int nums1[n];
    int nums2[m];

    for (int i = 0; i<n;i++) {
        cin >> nums1[i];
    }

    for (int i = 0; i<m;i++) {
        cin >> nums2[i];
    }

    int k, count=0;
    cin >> k;

    for (int i = 0; i<n;i++) {
        for (int j = 0; j<m;j++) {
            if (nums1[i] % (nums2[j] * k) == 0) {
                count++;
            }
        }
    }

    cout << count;

}