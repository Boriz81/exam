#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int sign = 1;
    if (n < 0) {
        sign = -1;
	n = -n;
    }

    int first_digit = n / 100;
    int middle_digit = (n / 10) % 10;
    int last_digit = n % 10;

    int result = last_digit * 100 + middle_digit * 10 + first_digit;

    if (sign == -1) {
	printf("-%03d", result);
	return 0;
    } else {
	printf("%03d", result);
	return 0;
    }
    return 0;
}
