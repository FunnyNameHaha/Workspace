#include <stdio.h>

int main(void)
{
        int eingabe;
        int wertscanf;

        printf("Bitte geben Sie eine ganze Zahl im Wertebereich von 1 bis 12 ein: \n");
        wertscanf = scanf("%d", &eingabe);
        printf("-----------------------------------------\n");

        if (wertscanf == 0) {
                printf("ERROR - Bitte geben Sie eine ganze Zahl ein!");
                return 1;
        } else if (getchar() != '\n') {
                printf("ERROR - Bitte geben Sie eine nur eine ganze Zahl ein und keine weiteren Zahlen oder Zeichen!");
                return 1;
        } else if (eingabe < 1 || eingabe > 12) {
                printf("ERROR - Bitte geben Sie eine ganze Zahl im Wertebereich von 1 bis 12 ein!");
                return 1;
        }

        printf("Ihre Eingabe war erfolgreich!\n");

        return 0;
}
