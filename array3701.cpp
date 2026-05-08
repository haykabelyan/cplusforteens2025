#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n,s=0;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    for(int i=1;i<n;i+=2) {
        nums[i]=-nums[i];
    }
    for(int i=0;i<n;i++) {
        s+=nums[i];
    }
    cout<<s;
    

    return 0;
}