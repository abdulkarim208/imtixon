#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);

    int sonlar[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            scanf("%d", &sonlar[i][k]);
        }
    }

    int yigindi = 0;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            yigindi += sonlar[i][k];
        }
    }

    printf("yigindisi: %d\n", yigindi);
}