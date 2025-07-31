#include <stdio.h>

int main() {
    int x, count = 0;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
