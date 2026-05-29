#include <iostream>
#include <vector>

int main()
{
    std::vector< std::vector<int> > accounts = {{1,2,3},{3,2,1}};

    int max = 0;
    for(std::vector<int> el : accounts)
    {
        int sum = 0;
        for(int i = 0; i < el.size(); i++)
        {
            sum += el[i];
        }
        if(max < sum)
        {
            max = sum;
        }
    }

    std::cout << max;

    return 0;
}