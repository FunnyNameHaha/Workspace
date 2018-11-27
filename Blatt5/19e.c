#include <stdio.h>

int e(int a[], int s, int n);
int main(void)
{
        int n = 7;
        int s = 14;
        int a [n] = {0, 3, 8, 9, 13, 14, 15};
        int x = e(a, s, n);
        printf("%d\n", x);
}
int e(int a[], int s, int n)
{

        int m;
        int li = 0;
        int re = n + 1;
        while (li < re -1)
        {
                m = (li + re) / 2;
                if (s <= a[m])
                {
                        re = m;
                } else {
                        li = m;
                }
        }
        return re;
}
