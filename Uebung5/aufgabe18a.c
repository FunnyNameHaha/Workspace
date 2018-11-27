#include <stdio.h>

int read_digit(void);

int main(void)
{
        int ergebnis = 0;

        while (ergebnis == 0) {
                ergebnis = read_digit();
        }

        printf("Der ASCII Code lautet: %d", ergebnis);
        return 0;
}

int read_digit(void)
{
        printf("~~Bitte geben Sie eine Ziffer ein~~\n");
        printf("----------------------------------\n");
        char c = getchar();

        if (getchar() != '\n' || c < '0' || c > '9' || c == '\n') {
                printf("ERROR - falsche Eingabe!\n");
                while (getchar() != '\n') {

                }
                return 0;
        }

        return c;
}
