#include <stdio.h>
#define NMAX 10

int input(int *a, int *n) {
    if (scanf("%d", n) != 1 || *n <= 0 || *n > NMAX) {
        printf("n/a");
        return 0;
    }
    for (int *p = a; p - a < *n; p++) {
        if (scanf("%d", p) != 1) {
            return 0;
        }
    }
    return 1;
}

void squaring(int *a, int n) {
    for (int *p = a; p - a < n; p++) {
        *p = (*p) * (*p);
    }
}

void output (int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main () {
    int n = 0, data[NMAX];
    input (data, &n);
    squaring(data, n);
    output(data, n);
    return 0;
}
