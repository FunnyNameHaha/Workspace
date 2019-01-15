#include <stdio.h>

int main(void)
{
        int result, **v, *x, *y, n = 7;
        result = array_create(v, n);
        if (!result) {
                printf("Speicherfehler!\n");
                return 1;
        }
        result = array_create(v+n, n);
        if (!result) {
                printf("Speicherfehler!\n");
                return 1;
        }
        x = v[0];
        y = v[n];
        array_init(x, n);
        array_init(y, n);
        result = mult_array(x, y, n);
        array_destroy(x);
        array_destroy(y);
        printf("Ergebnis: %i\n", result);
        return 0;
}
