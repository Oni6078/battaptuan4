#include <stdio.h>

int laNguyenTo(int x) {
    if (x < 2)
        return 0;

    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (laNguyenTo(x))
        printf("%d la so nguyen to", x);
    else
        printf("%d khong la so nguyen to", x);

    return 0;
}
