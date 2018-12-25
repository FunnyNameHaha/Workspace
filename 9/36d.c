#include <stdio.h>

char *strpbrk(char* string, char* trigger)
{
        char *result;
        while (*(string++) != '\0') {
                while (*(trigger++) != '\0') {
                        if (*string == *trigger) {
                                *result = *string;
                                return result;
                        }
                }
        }
        return NULL;
}

int main(void)
{
        char * test = "Hallo.";
        char * trigger = "p.";
        char *p = strpbrk(test, trigger);

        if (p != NULL) {
                printf("Success!\n");
        } else {
                printf("Failure!\n");
        }
        return 0;
}
