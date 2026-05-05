#include <iostream>
using namespace std;
int main() {

    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    int s=0;
    for(int x: nums) {
        s+=x;
    }
    cout<<s%k;



    return 0;
}