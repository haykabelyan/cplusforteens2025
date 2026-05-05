#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> order;
    vector<int> friends;
    for (int i = 0; i < n1; i++) {
        int x;
        cin >> x;
        order.push_back(x);
    }
    for (int i = 0; i < n2; i++) {
        int x;
        cin >> x;
        friends.push_back(x);
    }

    vector<int> res;

    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (order[i] == friends[j]) {
                res.push_back(friends[j]);
            }
        }
    }

    for (int x : res) {
        cout << x << " ";
    }

}