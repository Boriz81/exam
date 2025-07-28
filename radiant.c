#include <math.h>
#include <stdio.h>

int main() {
    double R, result;
    if (scanf("%le", &R) != 1 && getchar() != '\n') {
    	printf("n/a");
    }
    else {
        result = round(R * 180 / M_PI);
        printf("%.lf", result);
    }
    return 0;
}
