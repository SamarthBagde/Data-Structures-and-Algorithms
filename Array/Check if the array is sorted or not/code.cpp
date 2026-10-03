#include <iostream>

using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;

    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] <= arr[i])
        {
            continue;
        }
        else
        {
            cout << "Array is not sorted in asc order";
            return 0;
        }
    }

    cout << "Array is sorted in asc order";
}