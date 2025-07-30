#include <stdio.h>
#include <math.h>

void calc_master(int r, double *m) {
    *m = (4 / 3.0) * acos(-1.0) * pow(r, 3) * 21500;
}

int main() {
    int r;
    double m;

    if (scanf("%d", &r) != 1 || (getchar() != '\n' && getchar() != EOF)) {
	printf("n/a");
	return 1;
    }
    calc_master(r, &m);
    printf("%.0lf", m);
    return 0;
}
