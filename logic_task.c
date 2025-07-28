#include <stdio.h>

int main() {
    int x, y, z;
    char ch;
    if (scanf("%d %d %d", &x, &y, &z) != 3 || x > 1 || y > 1 || z > 1 || x < 0 || y < 0 || z < 0 || ch = getchar() != '\n') {
        printf("n/a");
        return 0;
    }

    printf("%d", x && (y || z));
    return 1;
}
