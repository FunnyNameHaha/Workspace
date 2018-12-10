#include <stdio.h>

void print_array(int w[], int n)
{
        int i;
        for (i = 0; i <= n-1; i++)
        if (i == n-1)
        {
                printf ("%d\n", w[i]);
        } else {
                printf("%d,", w[i]);
        }
}
