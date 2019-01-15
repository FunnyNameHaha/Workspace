#include <stdio.h>
#include <stdlib.h>

int **matrix_cpy( int **m, int ze, int sp);
int main(void)
{
        int *pointer;
        int ze = 5;
        int sp = 3;
        matrix_cpy(&pointer, ze, sp);

        return 0;
}
int **matrix_cpy( int **m, int ze, int sp)
{
        int i;
        int j;
        int k;
        int **pointer;
        pointer =(int**) malloc(ze * sizeof(int *));
        if (m == NULL) {
                return NULL;
        }
        for(j = 0; j < sp; j++){
                pointer[j] = (int*)malloc(sizeof(int));
                if (pointer[j] == NULL){
                        for(k = 0; k < j; k++){
                                free(pointer[k]);
                        }
                        free(pointer);
                        return NULL;
                }
        }
        for(i = 0; i < ze; i++){
                pointer[i]= m[i];
        }
        return m;
}
