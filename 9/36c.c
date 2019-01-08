#include <stdio.h>

char *strrchr(const char *cs, int c)
{
        char *result = 0;
        while (*cs++) {
                if (*cs == (char)c) {
                        result = cs;
                }
        }
        return result;
}

int main(void)
{
        char input_1[] = "JodelJodelJooodel";
        char search = 'o';
        char *p = strrchr(input_1, search);

        if (p != NULL) {
                printf("Erfolg!\n");
        } else {
                printf("Fehler!\n");
        }
        return 0;
}
