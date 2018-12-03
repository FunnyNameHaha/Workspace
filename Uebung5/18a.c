#include <stdio.h>

int read_digit(void);
int main(void)
{
        int ziffer = 0;
        while (ziffer == 0)
        {
                printf("Ziffer eingeben:\n");
                ziffer = read_digit();
        }
        printf("Gültige Eingabe\n");
        printf("Der ASCII-Code der Ziffer ist %d\n", ziffer);

        return 0;

}
int read_digit(void)
{
        char c = getchar();
        if (c >= 48 && c <= 57)
        {
                return c;
        } else if (c == '\n'){
                printf("Ungültige Eingabe:\n");
                return 0;
        }
        while(getchar() != '\n')
        {

        }
        printf("Ungültige Eingabe:\n");
        return 0;
}
