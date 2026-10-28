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
    int n, dem = 0, x = 2;

    do {
        printf("Nhap n > 0: ");
        scanf("%d", &n);
    } while (n <= 0);

    while (dem < n) {
        if (laNguyenTo(x)) {
            printf("%d ", x);
            dem++;
        }
        x++;
    }

    return 0;
}