#include <math.h>
#include <stdio.h>

double f(double x) {
    return 3 * sin(6 * M_PI * x) + 2 * cos(4 * M_PI * x) + 5 * sin(M_PI * x);
}

int main(void) {
    for(double x = 0; x < 20.00; x += 0.05) {
        printf("%g, %g\n", x, f(x));
    }
}
