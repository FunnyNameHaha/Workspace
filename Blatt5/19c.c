#include <stdio.h>

void smult(int w[], int n, int x);
int main(void)
{
        int n = 3;
        int x = 3;
        int w[n];
        w[0] = 1;
        w[1] = 2;
        w[2] = 3;
        smult(w, n, x);
        printf("%d\n", w[1]);
}
void smult(int w[], int n, int x)
{
        int i;
        for(i = 0; i<n; i++) {
                w[i] = w[i] * x;
        }
}
