#include <stdio.h>

long long fibonacci(int n) {
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

long long fibonacciLap(int n) {
    if (n == 0)
        return 0;

    long long truoc = 0;
    long long hienTai = 1;

    for (int i = 2; i <= n; i++) {
        long long tiepTheo = truoc + hienTai;
        truoc = hienTai;
        hienTai = tiepTheo;
    }

    return hienTai;
}

int main() {
    int n;

    printf("Nhap n (0 <= n <= 40): ");
    scanf("%d", &n);

    if (n < 0 || n > 40) {
        printf("n khong hop le");
    } else {
        printf("F(%d) tinh bang de quy = %lld\n", n, fibonacci(n));
        printf("F(%d) tinh bang vong lap = %lld", n, fibonacciLap(n));
    }

    return 0;
}