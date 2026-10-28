#include <math.h>

double S_dequy(int n) {
    if (n == 1)
        return 1;
    return sqrt(n + S_dequy(n - 1));
}

double S_khongdequy(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++)
        s = sqrt(i + s);
    return s;
}