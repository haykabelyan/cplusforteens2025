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
    
    int n=nums.size();
        vector<int>result;
        
    for(int i=0;i<n;i++) {
        int c=0;
        for(int j=0;j<n;j++) {
        if(j!=i && nums[j]<nums[i]) {
            c++;
    }
        }
            result.push_back(c);
        }
    for(char c: result) (
        cout<<c;
    )

    

    return 0;
}