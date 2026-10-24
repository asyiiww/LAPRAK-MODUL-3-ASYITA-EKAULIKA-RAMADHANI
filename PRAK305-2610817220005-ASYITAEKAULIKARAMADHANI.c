#include <stdio.h>

int main() {
    long long total_detik, sisa_detik;
    long long hari, jam, menit, detik;

    printf("Masukkan jumlah detik: ");
    scanf("%lld", &total_detik);

    hari = total_detik / 86400;
    sisa_detik = total_detik % 86400;

    jam = sisa_detik / 3600;
    sisa_detik %= 3600;

    menit = sisa_detik / 60;
    detik = sisa_detik % 60;

    if (hari > 0) {
        printf("%lld hari %02lld:%02lld:%02lld\n", hari, jam, menit, detik);
    } else {
        printf("%02lld:%02lld:%02lld\n", jam, menit, detik);
    }
    return 0;
}