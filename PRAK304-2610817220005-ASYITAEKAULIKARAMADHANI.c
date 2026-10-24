#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan bilangan: ");
    scanf("%d", &angka);

    if (angka == 0) {
        printf("Nol\n");
    } else if (angka >= 1 && angka <= 9) {
        printf("Satuan\n");
    } else if (angka >= 11 && angka <= 19) {
        printf("Belasan\n");
    } else if ((angka >= 10 && angka < 11) || (angka >= 20 && angka < 100)) {
        printf("Puluhan\n");
    } else {
        printf("Anda Menginput Melebihi Limit Bilangan\n");
    }
    return 0;
}