#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> arr = {3, 0, 1, 1, 9, 7};
    int a = 7, b = 2, c = 3;
    int count = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {

            if (abs(arr[i] - arr[j]) <= a)
            {
                for (int k = j + 1; k < arr.size(); k++)
                {

                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                    {
                        count++;
                    }
                }
            }
        }
    }

    cout << count;
}