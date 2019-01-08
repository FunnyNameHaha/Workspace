#include <stdio.h>

char * strpbrk(const char *cs, const char *ct)
{
        char *p;
        int a;

        while ((a = *cs++) != '\0') {
                for (p = ct; *p != '\0'; p++) {
                        if (a == *p) {
                                return (char *)(--cs);
                        }
                }
        }
        return NULL;
}

int main(void)
{
        char * test = "Hallo.";
        char * trigger = "a";
        char *p = strpbrk(test, trigger);

        if (p != NULL) {
                printf("%c", *p);
        } else {
                printf("Failure!\n");
        }
        return 0;
}
