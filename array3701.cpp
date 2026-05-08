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
    for(int i=0;i<n;i++) {
            if(i%2==0) {
                nums[i]=nums[i];
            } else nums[i]=-nums[i];
        }
        int s=0;
        for(int i=0;i<n;i++) {
          s+=nums[i];
        }
        cout<<s;
    

    return 0;
}