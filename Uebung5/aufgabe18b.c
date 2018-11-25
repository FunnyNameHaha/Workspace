#include <stdio.h>

int read_number(void);

int main(void)
{
        int ergebnis;

        ergebnis = read_number();

        if (ergebnis != -1) {
                printf("Die Zahl lautet: %d", ergebnis);
                return 0;
        }

        return 1;
}

int read_number(void)
{
        int eingabe;
        printf("~~Bitte geben Sie eine Zahl zwischen 8 und 40 ein~~\n");
        printf("---------------------------------------------------\n");
        scanf("%d", &eingabe);

        if (getchar() != '\n' || eingabe < 8 || eingabe > 40) {
                printf("ERROR - falsche Eingabe!");
                return -1;
        }
        return eingabe;
}
