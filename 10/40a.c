#include <stdio.h>

int **matrix_cpy(int **m, int ze, int sp)
{
        int i, j;
        int **p = (int**) malloc(ze * sizeof(int*));
        if (!p) {
                return NULL;
        }
        for (i = 0; i < sp; i++) {
                mat[i] = (int*) malloc(sp * sizeof(int));
                if (!mat[i]) {
                        return NULL;
                }
        }
        for (i = 0; i < ze, i++) {
                p[i] = m[i];
        }
        return p;
}

int main(void)
{
        
}
