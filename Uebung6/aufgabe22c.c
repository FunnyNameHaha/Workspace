#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int cube();

int main(void)
{
        printf("%d", cube());
}

int cube()
{
        srand(time(0));
        return rand() % 6 + 1;
}
