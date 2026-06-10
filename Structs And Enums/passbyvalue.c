#include <stdio.h>

void degistir(int x) {
    x = 5;
}


int main() {
    int a = 10;
    printf("Degistirilmeden once: %d\n", a);
    degistir(a);
    printf("Degistirildikten sonra: %d\n", a);
    return 0;
}
