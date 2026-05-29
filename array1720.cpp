#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {

    int n;
    cin>>n;
    int first;
    cin>>first;
    vector<int>encoded;
    for(int i=0;i<n;i++) {
        cin>>encoded[i];
    }
    
    vector<int> arr;
    arr.push_back(first);
    for(int i=0;i<encoded.size();i++) {
        int next=arr[i]^encoded[i];
        arr.push_back(next);
    }
    for(int c: arr) (
        cout<<c<<' ';
    )

    

    return 0;
}