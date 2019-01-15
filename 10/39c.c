#include <stdio.h>
#include <math.h>

double myfrexp(double x, int *exp)
{
        if (!x) {
                *exp = 0;
                return 0;
        }
        while (!(fabs(x) >= 0.5 && fabs(x) <= 1) {
                if (fabs(x) < 0.5) {
                        x *= 2;
                        *exp = *exp - 1;
                } else {
                        x /= 2;
                        *exp = *exp + 1;
                }
        }
        return x;
}

int main(void)
{

}
