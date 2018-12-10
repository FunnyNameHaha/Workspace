#include <stdio.h>

int abstand(int wert1, int wert2);

int main()
{
        char zeichen1;
        char zeichen2;
        int wert1;
        int wert2;
        int differenz;
        printf("Eingabe Zeichen 1: \n");
        scanf(" %c", &zeichen1);
        wert1 = (int)zeichen1;
        printf("Eingabe Zeichen 2: \n");
        scanf(" %c", &zeichen2);
        wert2 = (int)zeichen2;

        differenz = abstand(wert1, wert2);

        printf("Zeichen zwischen den beiden ASCII Zeichen: %d\n\n", differenz);

        return 0;
}

int abstand(int wert1, int wert2)
{
        int differenz;
        if (wert1 > wert2) {
                differenz = wert1 - wert2 - 1;
        } else {
                differenz = wert2 - wert1 - 1;
        }

        return differenz;
}
