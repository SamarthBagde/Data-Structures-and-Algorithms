#include <iostream>

using namespace std;

int main()
{
    int n = 16;
    int ans = n & (n - 1);

    if (ans == 0)
    {
        printf("Power of 2");
    }
    else
    {
        printf("Not power of 2");
    }
}