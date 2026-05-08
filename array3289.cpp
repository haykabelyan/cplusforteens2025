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
    vector<int>result;
        vector<int>a;
        set<int>s1;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(i!=j && nums[i]==nums[j]) {
                    result.push_back(nums[i]);

                }
            }
        }
        for(int c: result) {
            s1.insert(c);
        }
        for(int c: s1) {
            a.push_back(c);
        }
        for(int i=0;i<a.size();i++) {
            cout<<a[i]<<" ";
        }
    

    return 0;
}