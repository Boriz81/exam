#include <math.h>
#include <stdio.h>

int main() {
    double R, result;
    if (scanf("%lf", &R) == 1 && getchar() == '\n') {
        result = round(R * 180/M_PI);
        printf("%.lf", result);
    } else
        printf("n/a");
    return 0;
}
