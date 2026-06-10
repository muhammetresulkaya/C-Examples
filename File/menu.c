#include <stdio.h>

int kareninAlani(int num) {
    int result = num*num;
    return result;
}


int main() {
    float result;
    int choice,num;

    printf("Daire alanini hesaplamak icin 1'e basin\n");
    printf("Kare alanini hesaplamak icin 2'ye basin\n");
    printf("Kure alanini hesaplamak icin 3'e basin\n");
    printf("Seciminizi girin:\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Dairenin yaricapini girin:\n");
            scanf("%d", &num);
            result = 3.14 * num * num;
            printf("Dairenin alani: %.2f\n", result);
            break;
        case 2:
            printf("Karenin kenar uzunlugunu girin:\n");
            scanf("%d", &num);
            result = kareninAlani(num);
            printf("Karenin alani: %.2f\n", result);
            break;
        case 3:
            printf("Kurenin yaricapini girin:\n");
            scanf("%d", &num);
            result = (4.0 / 3.0) * 3.14 * num * num * num;
            printf("Kurenin alani: %.2f\n", result);
            break;
        default:
            printf("Gecersiz secim.\n");
    }

}
