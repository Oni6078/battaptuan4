#include <stdio.h>

void kiemTraTamGiac(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        printf("Khong phai tam giac");
        return;
    }

    int deu = (a == b && b == c);
    int can = (a == b || a == c || b == c);

    int x = a, y = b, z = c;

    // Dua z thanh canh lon nhat
    if (x > z) {
        int t = x; x = z; z = t;
    }
    if (y > z) {
        int t = y; y = z; z = t;
    }

    int vuong = (x * x + y * y == z * z);

    if (deu)
        printf("Tam giac deu");
    else if (vuong && can)
        printf("Tam giac vuong can");
    else if (vuong)
        printf("Tam giac vuong");
    else if (can)
        printf("Tam giac can");
    else
        printf("Tam giac thuong");
}

int main() {
    int a, b, c;

    printf("Nhap 3 canh tam giac: ");
    scanf("%d%d%d", &a, &b, &c);

    kiemTraTamGiac(a, b, c);

    return 0;
}