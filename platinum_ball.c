#include <stdio.h>
#include <math.h>

double calc_mass(double r) {
    double v = 4.0 / 3.0 * (acos(-1.0)) * r * r * r;
    return v * 21500;
}

int main() {
    
    double r;

    if (scanf("%lf", &r) != 1 || (getchar() != '\n' && getchar() != EOF)) {
	printf("n/a");
	return 1;
    }

    printf("%.0f", round(calc_mass(r)));
    return 0;
}
