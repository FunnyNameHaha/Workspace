#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

void matrix_mult_vek(int a[][N], int x[], int b[], int n, int m);
int main(void)
{
        int j;
        int n = 2;
        int m = N;
        int x[3] = {3, 5, 7};
        int b[2];
        int a[2][3] = {{3, 2, 1}, {4, 5, 6}};
        matrix_mult_vek(a, x, b, n, m);
        for(j = 0; j < n; j++){
                printf("%d\n", b[j]);
        }
        return 0;

}
void matrix_mult_vek(int a[][N], int x[], int b[], int n, int m)
{
        int i;
        int j;
        int y[N] = {0, 0};
        for (i = 0; i < n; i++){
                for(j = 0; j < m; j++){
                        y[i] += (a[i][j] * x[j]);
                }
                b[i] = y[i];
        }
}
