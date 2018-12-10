#include <stdio.h>

int comp(int x, int y)
{
        while (x + 1 > y) {
                x = x - y;
        }
        return x;
}

int main(void)
{
int x;
int y;
printf("Bitte geben Sie zwei positive ganze Zahlen, ");
printf("getrennt durch ein Leerzeichen, ein:");
scanf("%i %i", &x, &y);
printf("Rückgabewert der Funktion: %d", comp(x, y));

return 0;
}
