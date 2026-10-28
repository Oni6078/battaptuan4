#include <stdio.h>

void bangCuuChuong(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    bangCuuChuong(n);

    return 0;
}