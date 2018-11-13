#include <stdio.h>

int main(void)
{
        double eingabe;
        int wertscanf;

        printf("Bitte geben Sie eine Dezimalzahl ein: \n");
        wertscanf = scanf("%lf", &eingabe);
        printf("-----------------------------------------\n");

        if (wertscanf == 0) {
                printf("ERROR - Bitte geben Sie eine Dezimalzahl ein!");
                return 1;
        } else if (getchar() != '\n') {
                printf("ERROR - Bitte geben Sie eine nur eine Dezimalzahl ein und keine weiteren Zahlen oder Zeichen!");
                return 1;
        }

        printf("Ihre Eingabe war erfolgreich!\n");

        return 0;
}
