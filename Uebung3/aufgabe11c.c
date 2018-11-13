#include <stdio.h>
#include <ctype.h>

int main(void)
{

        char test[3];
        int wertscanf;

        printf("Bitte geben Sie eine drei sichtbare ASCII Zeichen ein, das erste Zeichen muss ein Grossbuchstabe sein: \n");
        wertscanf = scanf("%c%c%c", &test[0], &test[1], &test[2]);

        printf("-----------------------------------------\n");

        if (wertscanf == 0 || wertscanf == 1 || wertscanf == 2) {
                printf("ERROR - Bitte geben Sie drei sichtbare ASCII Zeichen ein, das erste muss ein Grossbuchstabe sein!");
                return 1;
        } else if (getchar() != '\n') {
                printf("ERROR - Bitte geben Sie nur drei sichtbare ASCII Zeichen ein!");
                return 1;
        } else if (isupper(test[0]) == 0) {
                printf("ERROR - Der erste Buchstabe muss gross sein!");
                return 1;
        } else if (test[1] == ' ' || test[2] == ' ') {
                printf("ERROR - Das Zeichen muss sichtbar sein!");
                return 1;
        }

        printf("Ihre Eingabe war erfolgreich!\n");

        return 0;
}
