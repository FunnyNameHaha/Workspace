#include <stdio.h>

char * strpbrk(const char *string, const char *search)
{
        char *p;
        int a;

        while ((a = *string++) != '\0') {
                for (p = search; *p != '\0'; p++) {
                        if (a == *p) {
                                return (char *)(--string);
                        }
                }
        }
        return NULL;
}

int main(void)
{
        char * test = "Hallo.";
        char * trigger = "o.";
        char *p = strpbrk(test, trigger);

        if (p != NULL) {
                printf("%c", *p);
        } else {
                printf("Failure!\n");
        }
        return 0;
}
