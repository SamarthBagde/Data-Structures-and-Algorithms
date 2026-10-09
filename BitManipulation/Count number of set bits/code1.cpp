#include <iostream>

using namespace std;

int main()
{
    int n = 13;

    int ans = 0;

    while (n > 1)
    {
        ans += n & 1;

        n = n >> 1;
    }

    if (n == 1)
        ans += 1;

    printf("Number of set bits in n : %d", ans);
}