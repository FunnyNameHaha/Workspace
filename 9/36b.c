#include <stdio.h>
#include <string.h>

int main(void)
{
        char string_1[] = "Die naechste Vorlesung ist am 7.1.2019, 10:00 Uhr, im HS 1 (Bau C)";
        char string_2[] = "Heute ist der 19.12.2018";
        char search[] = "2019";
        char *p;
        p = strstr(string_1, search);

        if (p == NULL) {
                printf("Das gesuchte Wort ist nicht im String vorhanden!\n");
        } else {
                printf("Das gesuchte Wort befindet sich in der Zeichenkette!\n");
        }
        return 0;
}
