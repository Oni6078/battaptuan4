#include <stdio.h>

int timN(int M) {
    int n = 0;
    int tong = 0;

    while (tong + n + 1 < M) {
        n++;
        tong += n;
    }

    return n;
}

int main() {
    int M;

    printf("Nhap M: ");
    scanf("%d", &M);

    if (M <= 1) {
        printf("Khong co n nguyen duong thoa man");
    } else {
        printf("n lon nhat = %d", timN(M));
    }

    return 0;
}