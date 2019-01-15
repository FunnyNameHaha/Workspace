#include <stdio.h>

void matrix_print(int *m, int ze, int sp)
{
        int i, j;
        for (i = 0; i < ze; i++) {
                for (j = 0; j < sp; j++) {
                        if ((j + 1) == sp) {
                                printf("%i\n", *(m++));
                        } else {
                                printf("%i  ", *(m++));
                        }
                }
        }
}

int main(void)
{

}
