#include <stdio.h>

int main() {
    
    FILE *f = fopen("matn.txt", "w");

    if (f == NULL) {
        printf("Bunday fayl yo'q!");
        return 1;
    }

    fprintf(f, "Salom, C dasturlash!");
    fclose(f);

    printf("Matn faylga yozildi");
}
