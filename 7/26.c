#include <stdio.h>

int read_digit();

int read_array(char w[]);

int flush_buff(void);

int main(void)
{
        char w[4];
        int returnvalue;
        printf("Dieses Programm liest eine Zeichenkette der Laenge 3 ein\n");
        printf("Bitte geben Sie nun die Zeichen ein\n");

        returnvalue = read_array(w);

        if (returnvalue == 15) {
                printf("Pufferfehler!\n");
                return 1;
        } else if (returnvalue == 14) {
                printf("Ungueltige Eingabe!\n");
                return 2;
        } else {
                printf("\n%s", w);
                return 0;
        }
}

int read_digit()
{
        int n;
        int value;

        value = scanf("%d", &n);

        if (value != 1 || n < 1 || n > 12) {
                flush_buff();
                return 14; /*Ungültige Eingabe*/
        } else if (getchar() != '\n') {
                flush_buff();
                return 15; /*Pufferfehler*/
        }

        return n;
}

int read_array(char w[])
{
        int value;
        int test1;
        int test2;

        value = scanf("%c%c%c", &w[0], &w[1], &w[2]);

        test1 = feof(stdin);
        test2 = ferror(stdin);

        if (value != 3 || test1 != 0 || test2 != 0 || w[0] == '\n' || w[1] == '\n' || w[2] == '\n') {
                flush_buff();
                return 14; /*Ungültige Eingabe*/
        } else if (getchar() != '\n') {
                flush_buff();
                return 15; /*Pufferfehler*/
        } else {
                return 0;
        }

}

int flush_buff(void)
{
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return c != EOF;
}
