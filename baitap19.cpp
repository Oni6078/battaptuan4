#include <stdio.h>

void doiThoiGian(int T) {
    int gio = T / 3600;
    int phut = (T % 3600) / 60;
    int giay = T % 60;

    printf("%dh:%dm:%ds", gio, phut, giay);
}

int main() {
    int T;

    printf("Nhap so giay T: ");
    scanf("%d", &T);

    if (T < 0) {
        printf("T phai >= 0");
    } else {
        doiThoiGian(T);
    }

    return 0;
}