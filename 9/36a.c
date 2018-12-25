#include <stdio.h>
#include <string.h>

void zeilen_zerlegen(char string[], char delimiter[]);

int main(void)
{
        char string[] = "Die naechste Vorlesung ist am 7.1.2019, 10:00 Uhr, im HS 1 (Bau C)";
        char delimiter[] = ", ()";

        zeilen_zerlegen(string, delimiter);

        return 0;
}

void zeilen_zerlegen(char string[], char delimiter[])
{
        char *p;

        p = strtok(string, delimiter);

        while (p != NULL) {
                printf("%s\n", p);
                p = strtok(NULL, delimiter);
        }
}
