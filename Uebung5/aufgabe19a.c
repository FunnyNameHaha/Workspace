#include <stdio.h>

void print_array(int w[], int n);

int main(void)
{
        int werte[6] = {1, 2, 4, 5, 6, 10};
        print_array(werte, 3);

        return 0;
}

void print_array(int w[], int n)
{
        int i;
        for (i = 0; i < n; i++) {
                if ((i + 1) == n) {
                        printf("%d", w[i]);
                } else {
                        printf("%d,", w[i]);
                }
        }
}
