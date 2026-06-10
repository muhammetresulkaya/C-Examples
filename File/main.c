#include <stdio.h>

int main() {
    FILE *fPtr;

    if ((fPtr = fopen("file.txt", "w")) == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    } else {
        puts("Hesap, isim ve bakiye girin.");
        puts("Girdiyi sonlandirmak icin EOF (Ctrl+Z then Enter on Windows, Ctrl+D on Mac/Linux) tuslayin.");
        printf("%s", "? ");

        unsigned int account; // unsigned int
        char name[30];
        double balance;

        scanf("%u%29s%lf", &account, name, &balance);

        while (!feof(stdin)) {
            fprintf(fPtr, "%u %s %.2f\n", account, name, balance);
            printf("%s", "? ");
            scanf("%u%29s%lf", &account, name, &balance);
        }

        fclose(fPtr);
        printf("Dosya basariyla kaydedildi!\n");
    }
    return 0;
}
