#include <stdio.h>

void print_rectangle(int lines, int columns)
{
        int i;
        int j;

        for (i = 1; i <= lines; i++)
        {
                for (j = 1; j <= columns; j++)
                {
                        printf("0");
                }
                printf("\n");
        }
}
