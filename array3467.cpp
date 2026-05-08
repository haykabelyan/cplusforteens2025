#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n,;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    for(int i=0;i<n;i++) {
            if(nums[i]%2==0) {
                nums[i]=0;
            } else nums[i]=1;
        }
        sort(nums.begin(), nums.end());
        for(int i=0;i<n;i++) {
            cout<<nums[i];
        }
    

    return 0;
}