#include <stdio.h>

int read_digit(void);

int main(void)
{
        int ergebnis;

        ergebnis = read_digit();

        if (ergebnis != 0) {
                printf("Der ASCII Code lautet: %d", ergebnis);
                return 0;
        }

        return 1;
}

int read_digit(void)
{
        printf("~~Bitte geben Sie eine Ziffer ein~~\n");
        printf("----------------------------------\n");
        char c = getchar();

        if (getchar() != '\n' || c < '0' || c > '9') {
                printf("ERROR - falsche Eingabe!");
                return 0;
        }
        return c;
}
