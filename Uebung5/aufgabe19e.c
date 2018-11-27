#include <stdio.h>

void berechnung(int a[], int s, int n);

int main(void)
{
        int a[] = {0, 3, 8, 9, 13, 14, 15};
        int s = 16;
        int n = 7;
        berechnung(a, s, n);
}

void berechnung(int a[], int s, int n)
{
        int m;
        int li = 0;
        int re = n + 1;

        while (li < re - 1) {
                m = (li + re)/2;
                if (s <= a[m]) {
                        re = m;
                }
                else {
                        li = m;
                }
        }
        printf("%d", re);
}
