#include <stdio.h>

void print_array(int w[], int n);
int main(void)
{
        int w[2];
        w[0] = 3;
        w[1] = 4;

        print_array(w, 2);
        return 0;
}
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
