#include <stdio.h>

void max(int x, int y) {
    if (x < y) {
        printf("the second number entered is greater\n");
    } else {
        printf("the first number entered is greater\n");
    }
}

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

    max(a, b);

    return 0;
}