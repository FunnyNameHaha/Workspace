#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int safecpy(char **t, char *s);
int main(void)
{
        char string[] = "Hallo";
        char *s = string;
        char **t = &s;

        if (safecpy(t, s) == 0){
                printf("nicht erfolgreich\n");
                return 1;
        }
        printf("%s\n", *t);
        printf("%ld\n", strlen(s));
        free(*t);
        return 0;

}
int safecpy(char **t, char *s)
{
        if(t == NULL){
                return 0;
        }
        *t = (char*)malloc((strlen(s) + 1) * sizeof(char));
        if (*t  == NULL){
                return 0;
        }
        strcpy(*t,s);
        return 1;
}
