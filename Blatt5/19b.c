#include <stdio.h>

int aufsteigend(int x[], int n);
int main(void)
{
        int n = 3;
        int x [n];
        x [0] = 3;
        x [1] = 2;
        x [2] = 3;
        int a = aufsteigend(x, n);
        printf("%d\n", a);
}
int aufsteigend(int x[], int n)
{
        int i = 0;
        while(i <= n-1)
        {
                if (x[i] <= x[i+1])
                {
                        i++;
                } else {
                        return 0;
                }
        }
        return 1;
}
