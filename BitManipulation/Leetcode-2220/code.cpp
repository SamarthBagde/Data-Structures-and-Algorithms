#include <iostream>

using namespace std;

int main()
{
    int start = 10, goal = 7;

    int result = start ^ goal;
    int ans = 0;

    while (result != 0)
    {
        result = result & (result - 1);
        ans++;
    }

    printf("Minimum no. of bit need to filp to conver start into goal is : %d", ans);
}