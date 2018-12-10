#include <stdio.h>
#include <ctype.h>

int main(void)
{
        char zeichen1;
        char zeichen2;
        int wert1;
        int wert2;
        int summe;

        printf("Bitte geben Sie das zweite Zeichen ein: \n");
        scanf(" %c", &zeichen1);
        printf("Bitte geben Sie das erste Zeichen ein: \n");
        scanf(" %c", &zeichen2);

        zeichen1 = tolower(zeichen1);
        zeichen2 = tolower(zeichen2);

        wert1 = (int)zeichen1;
        wert2 = (int)zeichen2;
        summe = wert1 + wert2;

        printf("Summe aus den beiden Werten: %d", summe);

        return 0;
}
