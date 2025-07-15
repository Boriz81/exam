#include <stdio.h>

int sum(int a, int b);

int sub(int a, int b);

int mult(int a, int b);

int div(int a, int b);

int main() {
    float a, b;

    printf("please enter first number\n");
    if (scanf("%f", &a) != 1) {
        printf("error");
        return 0;
    };

    if (a == (int)a) {
        printf("ok\n");
    } else {
        printf("error, your number is not integer\n");
        return 0;
    }

    printf("please enter second number\n");
    if (scanf("%f", &b) != 1) {
        printf("error");
        return 0;
    };
    if (b == (int)b) {
        printf("ok\n");
    } else {
        printf("error, your number is not integer\n");
        return 0;
    }

    if (!b == 0)
        printf("%d, %d, %d, %d", sum(a, b), sub(a, b), mult(a, b), div(a, b));
    else
        printf("%d, %d, %d, n/a", sum(a, b), sub(a, b), mult(a, b));

    return 0;
}

int sum(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mult(int a, int b) { return a * b; }
int div(int a, int b) {
    if (!b == 0)
        return a / b;
    else
        return 0;
}
