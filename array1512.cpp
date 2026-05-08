#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n,c=0;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    int c=0;
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(nums[i]==nums[j] && i<j) {
                c++;
            }
            }
        }
        cout<<c;
    

    return 0;
}