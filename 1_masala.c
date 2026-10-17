#include <stdio.h>

int main()
{
    int massiv[5];
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &massiv[i]);
    }
    
    int yigindi = 0;
    for (int i = 0; i < 5; i++)
    {
        yigindi += massiv[i];
    }

    printf("Yigindi: %d\n", yigindi);
}