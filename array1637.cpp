#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n;
    cin>>n;

    for(int i=0;i<n;i++) {
        int x,y;
        cin>>x>>y;
        v.push_back(x);
    }

    vector<int>v;
    
    sort(v.begin(), v.end());
    int mx=0;
    for(int i=1;i<v.size();i++) {
        mx=max(mx, v[i]-v[i-1]);
    }
    
    cout<<mx;
    

    return 0;
}