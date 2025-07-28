#include <math.h>
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int res = round(x * 59.27);
    printf("%d", (int)res);
    return 0;
}
