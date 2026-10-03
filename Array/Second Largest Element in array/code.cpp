#include <iostream>

using namespace std;

int main()
{
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;

    int largest = arr[0];
    int secondLargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    printf("Second largest element in array : %d", secondLargest);
}