#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    int n = nums.size();

    int i = 0;

    for (int j = 1; j < n; j++)
    {
        if (nums[j] != nums[i])
        {
            nums[i + 1] = nums[j];
            i++;
        }
    }

    printf("Number of unique elements : %d", i + 1);
}