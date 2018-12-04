#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int  wuerfel(void);
int main(void)
{
        srand(time(0));
        printf("%d\n", wuerfel());
        return 0;
}
int wuerfel(void)
{
        int a;
        a = rand() % ((6 + 1) - 1) + 1;
        return a;
}
