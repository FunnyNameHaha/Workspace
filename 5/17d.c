#include <stdio.h>

void print_triangle(int n)
{
        int i;
        int j;
        int count = 1;
        for(i = 1; i <= n; i++)
        {
                for(j = 0; j < count; j++)
                {
                        printf("0");
                }
                count++;
                printf("\n");
        }
}
