#include <stdio.h>

int main(void) {

    FILE *fPtr;

    if ((fPtr = fopen("clients.txt","r")) == NULL) {
        puts("Dosya acilamadi");
    } else {

        printf("%s","Istek girin\n"
            "1 - Sifir bakiyeli hesaplar\n"
            "2 - Kredi bakiyeli hesaplar\n"
            "3 - Borclu hesaplar\n"
            "4 - Çikis\n");

        unsigned int request;
        scanf("%u", &request);

        while (request != 4) {
            unsigned int account;
            double balance;
            char name[30];

            fscanf(fPtr, "%d %29s %lf", &account, name, &balance);

            switch (request) {
                case 1:
                    puts("Sifir bakiyeli hesaplar:");
                    while (!feof(fPtr)) {
                        if (balance == 0) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(fPtr, "%d %29s %lf", &account, name, &balance);
                    }
                    break;
                case 2:
                    puts("Kredi bakiyeli hesaplar:");
                    while (!feof(fPtr)) {
                        if (balance < 0) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(fPtr, "%d %29s %lf", &account, name, &balance);
                    }
                    break;
                case 3:
                    puts("Borclu hesaplar:");
                    while (!feof(fPtr)) {
                        if (balance > 0) {
                            printf("%-10d%-13s%7.2f\n", account, name, balance);
                        }
                        fscanf(fPtr, "%d %29s %lf", &account, name, &balance);
                    }
                    break;

            }
            rewind(fPtr);
            printf("%s","\n?");
            scanf("%u", &request);

        }
        puts("Program sonlandiriliyor.");
        fclose(fPtr);




    }

}
