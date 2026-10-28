#include <stdio.h>

void docSo(int n) {
    const char *chuSo[] = {
        "khong", "mot", "hai", "ba", "bon",
        "nam", "sau", "bay", "tam", "chin"
    };

    if (n == 0) {
        printf("khong");
        return;
    }

    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int donvi = n % 10;

    if (tram > 0) {
        printf("%s tram", chuSo[tram]);
    }

    if (chuc == 0 && donvi > 0 && tram > 0) {
        printf(" le");
    }

    if (chuc == 1) {
        printf(" muoi");
    } else if (chuc >= 2) {
        printf(" %s muoi", chuSo[chuc]);
    }

    if (donvi > 0) {
        if (chuc >= 2 && donvi == 1)
            printf(" mốt");
        else if (chuc >= 1 && donvi == 5)
            printf(" lăm");
        else
            printf(" %s", chuSo[donvi]);
    }
}

int main() {
    int N;

    do {
        printf("Nhap N (0 < N < 1000): ");
        scanf("%d", &N);
    } while (N <= 0 || N >= 1000);

    docSo(N);

    return 0;
}