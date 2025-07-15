#include <stdio.h>

long long fib(int x) {
    if (x < 2) {
        return x;
    }
    long long a = 0, b = 1, c;
    for (int i = 2; i <= x; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main() {
    int n;
    printf("Введите номер числа Фибоначчи: ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Ошибка ввода! Введите неотрицательное число.\n");
        return 1;
    }
    printf("%lld", fib(n));
    return 0;
}