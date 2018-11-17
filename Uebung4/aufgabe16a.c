#include <stdio.h>

int isupper(int c);

int tolower(int c);

int isalpha(int c);

int main(void)
{
        char zeichen;

        printf("\n~~Dieses Programm ueberprueft ein eingelesenes Zeichen~~\n");
        printf("Geben Sie nun ein Zeichen ein: ");
        scanf("%c", &zeichen);

        printf("\n--------------------------------------------------");
        printf("\n0 ist falsch, 1 ist wahr\n");
        printf("--------------------------------------------------\n");
        printf("Ist das Zeichen ein Grossbuchstabe: %d\n", isupper(zeichen));
        printf("Ist das Zeicher ein Buchstabe: %d\n", isalpha(zeichen));

        if (tolower(zeichen) == zeichen) {
                printf("Tolower hatte keinen Effekt\n");
        } else {
                printf("Tolower hat den Buchstaben %c in %c verwaldelt\n", zeichen, tolower(zeichen));
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
        if ((65 <= c && c <= 90) || (97 <= c && c <= 132)) {
                return 1;
        }
        return 0;
}
