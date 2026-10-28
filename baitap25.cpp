#include <stdio.h>

int laNguyenTo(int n) {
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

void inNguyenTo(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (laNguyenTo(i))
            printf("%d ", i);
    }
}

int main() {
    int a, b;

    printf("Nhap a, b: ");
    scanf("%d%d", &a, &b);

    if (a > b) {
        printf("Can nhap a <= b");
    } else {
        printf("Cac so nguyen to: ");
        inNguyenTo(a, b);
    }

    return 0;
}