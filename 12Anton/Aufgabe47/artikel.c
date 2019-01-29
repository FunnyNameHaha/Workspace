#include "seminar.h"
#include <stdio.h>

int main(void)
{
        int result;
        ARTIKEL b;
        result = artikel_new(&b, "Bleistift", 0.0, 0.75);
        if (result != 1) {
                printf("Fehler beim erstellen des Artikels\n");
                return 1;
        }
        result = artikel_set_rabatt(&b, 10.0);
        if (result != 1) {
                printf("Fehler beim ändern des Rabatts\n");
                return 1;
        }
        artikel_print(&b);

        return 0;
}
