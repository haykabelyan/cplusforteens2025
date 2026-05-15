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
    vector<int>leftsum(n);
    vector<int>rightsum(n);
    vector<int>result(n);
    for(int i=0;i<n;i++) {
        int s=0;
        for(int j=0;j<i;j++) {
            s+=nums[j];
        }
        leftsum[i]=s;
    }
        
}
    for(int i=0;i<n;i++) {
        int s=0;
        for(int j=i+1;j<n;j++) {
            s+=nums[j];
        }
            rightsum[i]=s;
    }
        
    for(int i=0;i<n;i++) {
         result[i]=abs(leftsum[i]-rightsum[i]);

    }
    for(int c: result) {
        cout<<c;
    }

    

    return 0;
}