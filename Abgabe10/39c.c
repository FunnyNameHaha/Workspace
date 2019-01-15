#include <stdio.h>
#include <math.h>

double my_frexp(double x, int * exponent);
int main(void)
{
        double x = 5;
        double fraction;
        int e;

        fraction = my_frexp(x, &e);
        printf("x = %.2f = %.2f * 2^%d\n", x, fraction, e);

        return 0;
}
double my_frexp(double x, int *exponent)
{
        int i;
        int count;
        for(i = 0; fabs(x) >= 1; i++) {
                x = x / 2;
                count ++;
                *exponent = count;
        }
        return x;
}
