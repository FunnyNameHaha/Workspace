#include <stdio.h>
#include <stdlib.h>

char *safecat(char *s, const char *ct)
{
        int i, j, size;
        char *p = NULL;
        for (i = 0; ct[i] != '\0'; i++) {}
        size = i;
        for (i = 0; s[i] != '\0'; i++) {}
        size += i;

        p = realloc(s, size * sizeof(char));
        if (p == NULL) {
                return NULL;
        }
        s = p;
        for (i = i + 1, j = 0; i < size; i++, j++) {
                s[i] = ct[j];
        }
        s[i+1] = '\0';
        return s;
}

int main(void)
{
        char string1[] = "Pastewka";
        char string2[] = "Stromberg";
        char *result = safecat(string1, string2);
        if (result == NULL) {
                printf("\n~~Kopieren war nicht erfolgreich~~\n\n");
                free(result);
                return 1;
        } else {
                printf("\n~~Kopieren war erfolgreich~~\n");
                printf("%s\n", *result);
                free(result);
                return 0;
        }
}
