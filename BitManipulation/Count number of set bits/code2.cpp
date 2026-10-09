#include <iostream>

using namespace std;

int main()
{
    int n = 16;

    int ans = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        ans++;
    }

    printf("No. of set bits in n : %d", ans);
}