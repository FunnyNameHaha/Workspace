#include <stdio.h>

char *strrchr(const char *string, int search)
{
        char *result = 0;
        while (*string++) {
                if (*string == (char)search) {
                        result = string;
                }
        }
        return result;
}

int main(void)
{
        char input_1[] = "JodelJodelJooodel";
        char search = 'p';
        char *p = strrchr(input_1, search);

        if (p != NULL) {
                printf("Erfolg!\n");
        } else {
                printf("Fehler!\n");
        }
        return 0;
}
