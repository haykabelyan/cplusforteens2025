#include <iostream>
#include <vector>

int main()
{
    std::vector<int> encoded = {1,2,3};
    int first = 1;
    std::vector<int> arr= {first};
 
    for(int i = 0;i < encoded.size();i++)
    {
        arr.push_back(encoded[i] ^ arr[i]); 
    }


    for(int el : arr)
    {
        std::cout << el;
    }
}