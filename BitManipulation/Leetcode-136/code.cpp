#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {4, 1, 2, 3, 1, 3, 2};

    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        ans ^= nums[i];
    }

    printf("Number that apperes only once in array : %d", ans);
}