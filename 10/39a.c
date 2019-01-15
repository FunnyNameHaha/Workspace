#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int safecpy(char **t, char *s)
{
        if (!t) {
                return 0;
        }
        *t = (char*) realloc(*t, strlen(s + 1));
        if (!t) {
                return 0;
        }
        strcpy(*t, s);
        return 1;
}

int main(void)
{
        int result;
}
