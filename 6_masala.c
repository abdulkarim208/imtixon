#include <stdio.h>

int rekursiyaYigindi(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + yigindi(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("yigindi: %d\n", yigindi(n));
}