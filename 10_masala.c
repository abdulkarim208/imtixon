#include <stdio.h>
#include <string.h>

struct Mahsulot
{
    char nomi[50];
    int narxi;
    int soni;
};

int main()
{
    struct Mahsulot mahsulotlar[5];
    char qidiruv[50];
    int engQimmat = 0;
    int topildi = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%49s %d %d",
              mahsulotlar[i].nomi,
              &mahsulotlar[i].narxi,
              &mahsulotlar[i].soni);
    }

    scanf("%49s", qidiruv);

    printf("Barcha mahsulotlar:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Nomi: %s\n", mahsulotlar[i].nomi);
        printf("Narxi: %d\n", mahsulotlar[i].narxi);
        printf("Soni: %d\n\n", mahsulotlar[i].soni);

        if (mahsulotlar[i].narxi > mahsulotlar[engQimmat].narxi)
        {
            engQimmat = i;
        }
    }

    printf("Eng qimmat mahsulot:\n");
    printf("Nomi: %s\n", mahsulotlar[engQimmat].nomi);
    printf("Narxi: %d\n\n", mahsulotlar[engQimmat].narxi);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(mahsulotlar[i].nomi, qidiruv) == 0)
        {
            printf("Mahsulot topildi!\n");
            printf("Nomi: %s\n", mahsulotlar[i].nomi);
            printf("Narxi: %d\n", mahsulotlar[i].narxi);
            printf("Soni: %d\n", mahsulotlar[i].soni);

            topildi = 1;
            break;
        }
    }

    if (topildi == 0)
    {
        printf("Mahsulot topilmadi!\n");
    }

    FILE *f = fopen("mahsulotlar.txt", "w");

    if (f == NULL)
    {
        printf("Faylni ochib bo'lmadi!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        fprintf(f, "%s %d %d\n",
                mahsulotlar[i].nomi,
                mahsulotlar[i].narxi,
                mahsulotlar[i].soni);
    }

    fclose(f);

    printf("\nMa'lumotlar mahsulotlar.txt fayliga yozildi.\n");

    return 0;
}