#include <stdio.h>

void matrix_print(int *m, int ze, int sp);
int main(void)
{
        int ze = 4;
        int sp = 2;
        int matrix[4][2] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
        int *m = matrix[0];
        matrix_print(m, ze, sp);
        return 0;
}
void matrix_print(int *m, int ze, int sp)
{
        int i;
        int j;
        for(i = 0; i < ze; i++){
                for(j = 0; j < sp; j++){
                        printf("%8.d", *(m++));
                        printf("        ");
                }
                printf("\n");
        }
}
