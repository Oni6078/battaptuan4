#include <stdio.h>

int demUoc(int N) {
    int dem = 0;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0)
            dem++;
    }

    return dem;
}

int main() {
    int N;
    printf("Nhap N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N phai la so nguyen duong");
    } else {
        printf("So uoc cua %d la: %d", N, demUoc(N));
    }

    return 0;
}