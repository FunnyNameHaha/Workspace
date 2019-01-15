#include <stdio.h>
#include <stdlib.h>

int *cpy_array(int v[], int size)
{
        int i, *p;
        p = (int *) malloc(size * sizeof(int));
        if (p == NULL) {
                return NULL;
        }
        for (i = 0; i < size; i++) {
                p[i] = v[i];
        }
        return p;
}

int main(void)
{
        int v[] = {7, 8, 9, 10};
        int i;
        int size = sizeof(v)/sizeof(int);
        int *result = cpy_array(v, size);

        if(result == NULL) {
                printf("\n~~Kopieren war nicht erfolgreich~~\n\n");
                free(result);
                return 1;
        } else {
                printf("\n~~Kopieren war erfolgreich~~\n");
                for (i = 0; i < size; i++) {
                        if ((i+1) == size) {
                                printf("%i\n\n", *(result + i));
                        } else {
                                printf("%i,", *(result + i));
                        }
                }
                free(result);
                return 0;
        }
}
