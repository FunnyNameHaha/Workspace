#include <stdio.h>

int main(void)
{
        int zahl;
        char buchstabe;
        int wertscanf;
        int wertchar;

        printf("Bitte geben Sie eine negative ganze Zahl unmittelbar gefolgt von einem Grossbuchstaben ein (Bsp.:-xA): \n");
        wertscanf = scanf("%d%c", &zahl, &buchstabe);
        wertchar = (int)buchstabe;
        printf("-----------------------------------------\n");

        if (wertscanf == 0 || wertscanf == 1) {
                printf("ERROR - Bitte geben einen negativen integer gefolgt von einem Grossbuchstaben ein!");
                return 1;
        } else if (getchar() != '\n') {
                printf("ERROR - Bitte geben Sie eine nur eine Dezimalzahl ein und keine weiteren Zahlen oder Zeichen!");
                return 1;
        } else if (zahl >= 0) {
                printf("ERROR - Die ganze Zahl muss negativ sein!");
                return 1;
        } else if (wertchar < 65 || wertchar > 90) {
                printf("ERROR - Das zweite Zeichen muss ein Grossbuchstabe sein!");
                return 1;
        }

        printf("Ihre Eingabe war erfolgreich!\n");

        return 0;
}
