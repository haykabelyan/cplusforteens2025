#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    vector<float> arr2(n/2);

    for (int i = 0; i < n/2; i++) {

        sort(arr1.begin(), arr1.end());
        

        arr2.push_back((arr1[0] + arr1[n-1]) / 2.0);
        arr1.erase(arr1.begin() + n-1);
        arr1.erase(arr1.begin());
    }

   

    int res = arr2[0];
    for (int i = 0; i < arr2.size(); i++) {
        if (arr2[i] < res) res = arr2[i];
    }

    cout << res;
    
    

}