#include <stdio.h>

int main() {
    FILE *dosya = fopen("not.txt", "w");

    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    fprintf(dosya, "Merhaba, Dunya!\n");
    fprintf(dosya, "C ile dosya isleme.\n");
    fprintf(dosya, "Ucuncu satir.\n");

    fclose(dosya);
    printf("Dosya basariyla yazildi.\n");
    return 0;
}
