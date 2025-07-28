#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num < 0) {
	num = -num;
	printf("-%d %d %d", num % 10, (num / 10) % 10, num / 100);
    } else {
	printf("%d %d %d", num % 10, (num / 10) % 10, num / 100);
    }
    return 0;
}
