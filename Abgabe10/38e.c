#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *orakel(void);

int main(void)
{
        char *s;
        s = orakel();
        if (s == NULL) {
                printf("main: Speicherfehler in orakel");
                return 1;
        }
        printf("%s", s);
        free(s);
        return 0;
}

char *orakel(void)
{
        char *s, *t;
        s = (char*) malloc(15 * sizeof(char)); /*Da "Six Feet Under" 14 Zeichen + \0 sind muss man 15 chars reservieren*/
        if (s == NULL){
                return NULL;
        }
        t = (char*) malloc(7 * sizeof(char));
        if (t == NULL) {
                return NULL;
        }
        strcpy(s, "Six Feet");
        strcpy(t, " Under");
        strcat(s, t);
        free(t);
        return s;
}
