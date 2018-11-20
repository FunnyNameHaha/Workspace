#include <stdio.h>

int isupper(int c);

int tolower(int c);

int isalpha(int c);

int main(void)
{
        char zeichen1;
        char zeichen2;
        char zeichen3;
        char zeichen4;

        printf("\n~~Dieses Programm ueberprueft ein eingelesenes Zeichen~~\n");
        printf("\n--------------------------------------------------");
        printf("\n0 ist falsch, 1 ist wahr\n");
        printf("--------------------------------------------------\n");
        printf("Ist das Zeichen ein Grossbuchstabe \n");
        printf("Bitte geben Sie nun ein Zeichen ein: " );
        scanf(" %c", &zeichen1);
        printf("Ergebnis: %d\n", isupper(zeichen1));
        printf("--------------------------------------------------\n");
        printf("Ist das Zeichen ein Buchstabe \n");
        printf("Bitte geben Sie nun ein Zeichen ein: ");
        scanf(" %c", &zeichen2);
        printf("Ergebnis: %d\n", isalpha(zeichen2));
        printf("--------------------------------------------------\n");
        printf("Diese Funktion wandelt einen Grossbuchstaben \nzu einem Kleinbuchstaben um \n");
        printf("Bitte geben Sie nun ein Zeichen ein: ");
        scanf(" %c", &zeichen3);

        zeichen4 = zeichen3;
        zeichen3 = tolower(zeichen3); /*Extraschritt um zu schauen, ob tolower etwas getan hat*/

        if (zeichen3 == zeichen4) {
                printf("Tolower hatte keinen Effekt, da das Zeichen kein Grossbuchstabe war\n");
        } else {
                printf("Tolower hat den Buchstaben %c zu %c verkleinert\n", zeichen4, zeichen3);
        }

        return 0;
}

int isupper(int c)
{
        if (65 > c || c > 90) {
                return 0;
        }
        return 1;
}

int tolower(int c)
{
        if (65 <= c && c <= 90) {
                return c + 32;
        }
        return c;
}

int isalpha(int c)
{
        if ((65 <= c && c <= 90) || (97 <= c && c <= 122)) {
                return 1;
        }
        return 0;
}
