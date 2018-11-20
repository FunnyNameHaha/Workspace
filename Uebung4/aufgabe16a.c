#include <stdio.h>

int isupper(int c);

int tolower(int c);

int isalpha(int c);

int main(void)
{
        char zeichen1;
        char zeichen2;

        printf("\n~~Dieses Programm ueberprueft ein eingelesenes Zeichen~~\n");
        printf("Geben Sie nun ein Zeichen ein: ");
        scanf("%c", &zeichen1);

        printf("\n--------------------------------------------------");
        printf("\n0 ist falsch, 1 ist wahr\n");
        printf("--------------------------------------------------\n");
        printf("Ist das Zeichen ein Grossbuchstabe: %d\n", isupper(zeichen1));
        printf("Ist das Zeichen ein Buchstabe: %d\n", isalpha(zeichen1));

        zeichen2 = tolower(zeichen1); /*Extraschritt um zu schauen, ob tolower etwas getan hat*/

        if (zeichen1 == zeichen2) {
                printf("Tolower hatte keinen Effekt, da das Zeichen kein Grossbuchstabe war\n");
        } else {
                printf("Tolower hat den Buchstaben %c in %c verwaldelt\n", zeichen1, zeichen2);
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
