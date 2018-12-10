#include <stdio.h>

int main(void)
{
        int eingabe1;
        int eingabe2;
        int wertscanf;

        printf("Bitte geben Sie zwei ganze Zahlen mit einem Punkt dazwischen ein (Bsp.:x.y): \n");
        wertscanf = scanf("%d.%d", &eingabe1, &eingabe2);
        printf("-----------------------------------------\n");

        if (wertscanf == 0 || wertscanf == 1) {
                printf("ERROR - Bitte geben Sie zwei(!) ganze Zahlen ein!");
                return 1;
        } else if (getchar() != '\n') {
                printf("ERROR - Bitte geben Sie ausschließlich zwei ganze Zahlen getrennt durch einen Punkt ein!");
                return 1;
        }

        printf("Ihre Eingabe war erfolgreich!\n");

        return 0;
}
