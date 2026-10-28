#include <stdio.h>

int laChinhPhuong(int x) {
    if (x < 0)
        return 0;

    for (int i = 0; i * i <= x; i++) {
        if (i * i == x)
            return 1;
    }

    return 0;
}

int main() {
    int x;
    printf("Nhap x: ");
    scanf("%d", &x);

    if (laChinhPhuong(x))
        printf("%d la so chinh phuong", x);
    else
        printf("%d khong la so chinh phuong", x);

    return 0;
}