#include <stdio.h>

void berechnung(int a[], int s);

int main(void)
{
        int a[] = {0, 3, 8, 9, 13, 14, 15};
        int s = 4;
        berechnung(a, s);
}

void berechnung(int a[], int s)
{
        int i;
        int m;
        int li = 0;
        int re = 1;

        for (i = 0; a[i] != '\0'; i++) {
                re++;
        }

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
