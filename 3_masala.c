#include <stdio.h>

int katta(int n, int m)
{
    if (n > m)
    {
        return n;
    }
    else
    {
        return m;
    }
}

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    printf("katta: %d", katta(n, m));
}