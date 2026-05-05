#include <iostream>
#include <vector>
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
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
          if(order[i]==friends[j]) 
          cout<<order[i];
        }
    }

    return 0;

}