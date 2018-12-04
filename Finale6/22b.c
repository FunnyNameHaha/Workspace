#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int zufallszahl();

int main(void)
{
        printf("%d", zufallszahl());
}

int zufallszahl()
{
        srand(time(0));
        return rand() % 2;
}
