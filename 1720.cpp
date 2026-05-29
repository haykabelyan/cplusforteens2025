#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, first;
    cin >> n;
    vector<int> encoded(n);

    for (int i = 0; i < n; i++) {
        cin >> encoded[i];
    }
    cin >> first;

    vector<int> arr;
    arr.push_back(first);

    for (int i = 0; i < encoded.size(); i++) {
        int next = arr[i] ^ encoded[i]; 
        arr.push_back(next);
    }

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    
    cout << endl;

    return 0;
}