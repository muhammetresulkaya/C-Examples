#include <stdio.h>

int main() {
    FILE *dosya = fopen("not.txt", "r");
    char satir[256];
    int satir_no = 1;

    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    while (fgets(satir, sizeof(satir), dosya) != NULL) {
        printf("%2d: %s", satir_no, satir);
        satir_no++;
    }

    printf("\nToplam %d satir okundu.\n", satir_no - 1);
    fclose(dosya);
    return 0;
}
