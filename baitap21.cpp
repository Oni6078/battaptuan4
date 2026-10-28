#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Cau a: Tinh can long nhau
double cauA(int n) {
    if (n == 1)
        return sqrt(2);

    return sqrt(2 + cauA(n - 1));
}

// Cau b: Tinh UCLN
int cauB(int a, int b) {
    if (b == 0)
        return abs(a);

    return cauB(b, a % b);
}

// Cau c: Tinh S(n) = 1/2 + 2/3 + ... + n/(n+1)
double cauC(int n) {
    if (n == 1)
        return 1.0 / 2;

    return cauC(n - 1) + (double)n / (n + 1);
}

// Cau d: Tinh S(n) = 1 + 1/3 + 1/5 + ... + 1/(2n+1)
double cauD(int n) {
    if (n == 0)
        return 1;

    return cauD(n - 1) + 1.0 / (2 * n + 1);
}

// Cau e: Tinh S(n) = 1*2 + 2*3 + ... + n*(n+1)
long long cauE(int n) {
    if (n == 1)
        return 2;

    return cauE(n - 1) + (long long)n * (n + 1);
}

int main() {
    int chon, n, a, b;

    printf("===== BAI 21: DE QUY =====\n");
    printf("1. Cau a - Tinh can long nhau\n");
    printf("2. Cau b - Tim UCLN\n");
    printf("3. Cau c - Tinh tong phan so\n");
    printf("4. Cau d - Tinh tong nghich dao so le\n");
    printf("5. Cau e - Tinh tong tich hai so lien tiep\n");
    printf("Chon cau (1-5): ");
    scanf("%d", &chon);

    switch (chon) {
        case 1:
            printf("Nhap n > 0: ");
            scanf("%d", &n);

            if (n <= 0)
                printf("n khong hop le");
            else
                printf("Ket qua = %.6f", cauA(n));
            break;

        case 2:
            printf("Nhap a, b: ");
            scanf("%d%d", &a, &b);

            printf("UCLN = %d", cauB(a, b));
            break;

        case 3:
            printf("Nhap n > 0: ");
            scanf("%d", &n);

            if (n <= 0)
                printf("n khong hop le");
            else
                printf("S = %.6f", cauC(n));
            break;

        case 4:
            printf("Nhap n >= 0: ");
            scanf("%d", &n);

            if (n < 0)
                printf("n khong hop le");
            else
                printf("S = %.6f", cauD(n));
            break;

        case 5:
            printf("Nhap n > 0: ");
            scanf("%d", &n);

            if (n <= 0)
                printf("n khong hop le");
            else
                printf("S = %lld", cauE(n));
            break;

        default:
            printf("Lua chon khong hop le");
    }

    return 0;
}