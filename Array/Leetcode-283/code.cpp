#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = arr.size();

    int i = 0;

    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            arr[i] = arr[j];
            i++;
        }
    }

    while (i < n)
    {
        arr[i] = 0;
        i++;
    }

    for (int k = 0; k < n; k++)
    {
        printf("%d ", arr[k]);
    }
}