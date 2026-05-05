#include <iostream>
using namespace std;
int main() {

    int n,m;
    cin>>n>>m;
    vector<int>order(n);
    vector<int>friends(m);
    for(int i=0;i<n;i++) {
        cin>>order[i];
    }
    for(int i=0;i<m;i++) {
        cin>>friends[i];
    }
    



    return 0;
}