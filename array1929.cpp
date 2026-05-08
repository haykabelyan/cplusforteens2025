#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    
    vector<int>nums(n);
    vector<int>ans;
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    for(int i=0;i<n;i++) {
        ans.push_back(nums[i]);
    }
    for(int i=0;i<n;i++) {
        ans.push_back(nums[i]);
    }
    for(int i=0;i<2*n;i++) {
        cout<<ans[i]<<" ";
    }
    

    return 0;
}