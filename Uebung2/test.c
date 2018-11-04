#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
        int x;
        int y;
        int z;

        /*int a = ((7));
        int b = 101010;
        int c = (5 ++ 4);
        double d = (5 * 0.03);
        double e = (2 + 5y);
        double f = 4 -- 5;
        double g = 13.1 % 4;*/
        double g1 = 13 / 4 + 1;
        double g2 = - 13.0 / 3;
        double g3 = 'A' - 'a';
        double g4 = tolower('A') - 'A';
        double g5 = '7' - '2';
        double g6 = '2' - 'a';
        /*int g7 = printf("The Wire");
        int g8 = printf("Lost\n");
        int g9 = printf("%3i", 1 - 2);
        double g10 = 2 * printf("The Sopranos %3i", 10000) - 3;*/
        double g12 = scanf("Datum: %i.%i.%i", &x, &y, &z);
        int g11 = scanf("%i", &x);
        getchar();
        printf("%d", g11);

        return 0;
}
