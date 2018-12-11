#include <stdio.h>
#include <string.h>
#include <ctype.h>


int flush_buff(void);
int dutzend(void);
int three(char x[]);
int main(void)
{
        char x[3];
        int a;
        int b;

        a = dutzend();
        if (a > 0 && a < 13) {
                printf("Eingabe erfolgreich\n");
        } else if (a == 13) {
                printf("Ungültige Eingabe\n");
                return 2;
        } else if (a == 14) {
                printf("Pufferfehler\n");
                return 1;
        }
        b = three(x);
        if (b == 1) {
                printf("Eingabe erfolgreich\n");
        } else if (b == 13) {
                printf("Ungültige Eingabe\n");
                return 2;
        } else if (b == 14) {
                printf("Pufferfehler\n");
                return 1;
        }

        return 0;
}

int dutzend(void)
{
        int x;
        int value;
        printf("Zahl zwischen eins und zwölf eingeben:\n");
        value = scanf("%d", &x);

        if (getchar() != '\n') {
                flush_buff();
                return 14;
        }
        if (value != 1 || x < 1 || x > 12) {
                flush_buff();
                return 13;
        }
        return x;
}

int three(char x[])
{
        int i;
        char c;
        printf("Dreistellige Kombination eingeben:\n");
        for(i = 0; i < 3; i++) {
                c = getchar();
                if (c == '\n') {
                        return 13;
                }
                x[i] = c;
        }
        if (getchar() == '\n') {
                return 1;
        } else {
                flush_buff();
                return 14;
        }
}

int flush_buff(void)
{
        int c;
        while ((c = getchar()) != '\n' && c != EOF)
        {

        }
        return c != EOF;
}
