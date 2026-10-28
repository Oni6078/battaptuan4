#include <stdio.h>
#include <stdlib.h>

int UCLN(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

void rutGon(int *tu, int *mau) {
    int u = UCLN(*tu, *mau);

    if (u != 0) {
        *tu /= u;
        *mau /= u;
    }

    if (*mau < 0) {
        *tu = -*tu;
        *mau = -*mau;
    }
}

int main() {
    int a, b, c, d;
    int tu, mau;

    do {
        printf("Nhap a, b (b != 0): ");
        scanf("%d%d", &a, &b);
    } while (b == 0);

    do {
        printf("Nhap c, d (d != 0): ");
        scanf("%d%d", &c, &d);
    } while (d == 0);

    // Tong hai phan so
    tu = a * d + b * c;
    mau = b * d;
    rutGon(&tu, &mau);
    printf("Tong = %d/%d\n", tu, mau);

    // Tich hai phan so
    tu = a * c;
    mau = b * d;
    rutGon(&tu, &mau);
    printf("Tich = %d/%d\n", tu, mau);

    return 0;
}