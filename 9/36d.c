#include <stdio.h>

char * strpbrk(const char *string, const char *trigger)
{
        const char *result, *stringcopy, *triggercopy;
        stringcopy = string;
        triggercopy = trigger;
        if (*trigger == '\0' || *string == '\0') {
                return NULL;
        }
        while (*stringcopy != '\0') {
                while (*triggercopy != '\0') {
                        if (*stringcopy == *triggercopy) {
                                result = stringcopy;
                                return result;
                        }
                        trigger++;
                }
                stringcopy++;
        }
        return NULL;
}

int main(void)
{
        char * test = "Hallo.";
        char * trigger = "p";
        char *p = strpbrk(test, trigger);

        if (p != NULL) {
                printf("Success!\n");
        } else {
                printf("Failure!\n");
        }
        return 0;
}
