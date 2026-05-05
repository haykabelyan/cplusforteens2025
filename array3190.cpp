#include <iostream>
#include <vector>
using namespace std;
int main() {

    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) {
        cin>>nums[i];
    }
    int c=0;
    for(int i=0;i<n;i++) {

        if(nums[i]%3!=0) {
        c++; 
    }
}
   cout<<c;

    return 0;
}