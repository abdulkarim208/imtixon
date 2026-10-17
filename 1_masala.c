#include <stdio.h>

int main()
{
    int sonlar[5];
    int yigindi = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &sonlar[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        yigindi += sonlar[i];
    }

    printf("Yigindi: %d\n", yigindi);
}