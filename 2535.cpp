#include <iostream>
using namespace std;

int main() {
    int n;
    int elsum = 0;
    int digsum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        elsum+= arr[i];
    }

    for (int i = 0; i < n; i++) {
        while (arr[i] > 0) {
            digsum += arr[i] % 10;
            arr[i] /= 10;
        }
    }

    cout << abs(elsum - digsum);
    
}