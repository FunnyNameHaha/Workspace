#include <stdio.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
        char zeichen1;
        char zeichen2;
        int pruefen1;
        int pruefen2;
        int summe;

        printf("Bitte geben Sie ihr erstes Zeichen ein: \n");
        scanf(" %c", &zeichen1);
        pruefen1 = islower(zeichen1);

        printf("Bitte geben Sie ihr zweites Zeichen ein: \n");
        scanf(" %c", &zeichen2);
        pruefen2 = isupper(zeichen2);

        summe = pruefen1 && pruefen2;
        printf("Der Wert (wenn 0 -> falsch), (wenn ungleich 0 -> wahr): %d", summe);

        return 0;
}
