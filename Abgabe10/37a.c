#include <stdio.h>
#include <stdlib.h>

int *cpy_array(int v[], int size);
int main(void)
{
        int i;
        int v[] = {7, 8, 9, 10};
        int size = sizeof(v) / sizeof(int);
        int *pointer = cpy_array(v, size);
        if (pointer == NULL) {
                printf("Speicherreservierung fehlgeschlagen\n");
                return 0;
        }
        for(i = 0; i < size; i++) {
                printf("w[%d] = %d\n", i, *(pointer + i));
        }
        free(pointer);
        pointer = NULL;

        return 0;
}
int *cpy_array(int v[], int size)
{
        int i;
        int * ptr = (int*)malloc(size * sizeof(int));
        if(ptr == NULL) {
                return ptr;
        }
        for(i = 0; i < size; i++) {
                *(ptr + i) = v[i];
        }
        return ptr;
}
