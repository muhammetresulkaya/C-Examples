#include <stdio.h>

int main() {
    FILE *dosya = fopen("not.txt", "r");
    int karakter;

    if (dosya == NULL) {
        printf("Dosya bulunamadi!\n");
        return 1;
    }

    printf("--- Dosya icerigi ---\n");
    while ((karakter = fgetc(dosya)) != EOF) {
        putchar(karakter);
    }
    printf("---------------------\n");

    fclose(dosya);
    return 0;
}
