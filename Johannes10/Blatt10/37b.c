#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *safecat(char *s, const char *ct);
int main(void)
{
        int i;
        char kette1[] = "Pastewka";
        char kette2[] = "Stromberg";
        int laenge = strlen(kette1) + strlen(kette2);
        char* pointer = safecat(kette1, kette2);
        if(pointer == 0){
                printf("Speicher konnte nicht erzeugt werden\n");
                return 0;
        }
        for(i = 0; i < laenge; i++){
        printf("%c", *(pointer + i));
        }
        printf("\n");
        free(pointer);
        pointer = NULL;

        return 0;
}
char *safecat(char *s, const char *ct)
{

        int i;
        int laenge = strlen(s) + 1 + strlen(ct);
        int laenge1 = strlen(s) + 1;
        char *ptr = (char*)malloc(laenge * sizeof(char));
        if (ptr == 0){
                return ptr;
        }
        for(i = 0; i < laenge1; i++){
                *(ptr + i) = s[i];
        }
        strcat(ptr, ct);
        return ptr;

}
