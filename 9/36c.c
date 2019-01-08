#include <stdio.h>

char *strrchr(char string[], char scan[])
{
        char *ptrstring = string;
        char *ptrscan = scan;
        char *temp1, *temp2;
        char *result = NULL;

        while (*(ptrstring++) != '\0') {
                if(*(ptrstring) == *(ptrscan++)) {
                        *temp1 = *ptrstring;
                        *temp2 = *ptrscan;
                        while (*(temp2++) != '\0') {
                                if ((*temp1++) != *temp2) {
                                        temp1 = NULL;
                                        temp2 = NULL;
                                        break;
                                }
                        }
                        if (temp1 != NULL) {
                        *result = *ptrstring;
                        }
                }
        }
        return result;
}

char *mystrrchr(char *cs, char c)
{
        char *result = NULL;
        while (*(cs++) != '\n') {
                if (*cs == c) {
                        result = cs;
                }
        }
        return result;
}

int main(void)
{
        char input_1[] = "JodelJodelJooodel";
        char search_1[] = "odel";
        char *p = strrchr(input_1, search_1);

        if (p != NULL) {
                printf("Erfolg!\n");
        } else {
                printf("Fehler!\n");
        }
}
