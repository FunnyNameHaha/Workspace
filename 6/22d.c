#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char zufallszahl();

int main(void)
{
        printf("%c", zufallszahl());

        return 0;
}

char zufallszahl()
{
        int value = 0;
        srand(time(0));

        while (value == 0) {
                value = rand() % (122 + 1 - 48) + 48;
                if (value < '0'|| value > 'z' || (value > '9' && value < 'A') || (value > 'Z' && value < 'a')) {
                        value = 0;
                }
        }

        return value;
}
