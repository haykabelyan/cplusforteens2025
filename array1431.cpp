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
    
    int n=candies.size();
        vector<bool>result(n);
        int max=candies[0];
        for(int i=0;i<n;i++) {
            if(max<=candies[i]) {
            max=candies[i];
            }
        }
        for(int j=0;j<n;j++) {
            candies[j]=candies[j]+extraCandies;
            if(max<=candies[j]) {
            result[j]=true;
            } else result[j]=false;
        }
    
    for(int c: result) {
        cout<<c;
    }

    

    return 0;
}