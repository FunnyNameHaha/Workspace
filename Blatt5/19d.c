#include <stdio.h>

int algo(int w[], int n);
int main(void)
{
        int n = 3;
        int w[n];
        w[0] = 3;
        w[1] = 2;
        w[2] = 3;
        int c = algo(w, n);
        printf("%d\n", c);
}
int algo(int w[], int n)
{
        int c = w[0];
        int i;
        for(i = 0;i < n; i++)
        {
                if (w[i] <= c)
                {
                        c = w[i];
                }
        }
        return c;
}
