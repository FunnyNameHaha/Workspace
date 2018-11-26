#include <stdio.h>

void smult(int w[], int n, int x);

int main(void)
{
        int w[] = {2, 3, 4, 5, 6, 7, 8};
        int x = 4;
        int n = 3;

        smult(w, n, x);
        printf("%d", w[2]);
}

void smult(int w[], int n, int x)
{
        int i;
        for (i = 0; i < n; i++) {
                w[i] = w[i] * x;
        }
}
