#include <stdio.h>

int main(void)
{
        int result, **x, **y, n = 7;
        result = array_create(x, n);
        if (!result) {
                printf("Speicherfehler!\n");
                return 1;
        }
        result = array_create(y, n);
        if (!result) {
                printf("Speicherfehler!\n");
                return 1;
        }
        array_init(x, n);
        array_init(y, n);
        result = mult_array(x, y, n);
        array_destroy(x);
        array_destroy(y);
        printf("Ergebnis: %i\n", result);
        return 0;
}
