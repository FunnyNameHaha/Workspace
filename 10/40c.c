#include <stdio.h>

void stringlist_rev(char *list[], int n)
{
        int i;
        for (i = 0; i < n; i++, n--) {
                list[i] = list[n-1];
        }
}

int main(void)
{

}
