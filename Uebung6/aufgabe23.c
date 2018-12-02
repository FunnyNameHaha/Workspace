#include <stdio.h>
#include <ctype.h>

#define MIN 2
#define MAX 20

int read_name(char input[]);

int main(void)
{
        char input[MAX];
        int result;

        printf("~~Dieses Programm liest eine Zeichenkette zwischen 2 und 20~~\n");
        printf("~~ein, die aus Buchstaben bestehen muessen, wobei der erste~~\n");
        printf("~~ein Grossbuchstabe sein muss~~\n\n");

        result = read_name(input);

        if (result == 1) {
                printf("Eingabe war erfolgreich!\n\n");
                return 0;
        } else {
                printf("ERROR - Eingabe war nicht erfolgreich!\n\n");
                return 1;
        }
}

int read_name(char input[])
{
        int i = 0;
        int j;
        int c;
        int ersterbuchstabe = 0;
        int buchstabe = 1;
        while((c = getchar()) != '\n') {
                input[i] = c;
                i++;
        }
        
        if (isupper(input[0])) {
                ersterbuchstabe = 1;
        }

        for (j = 1; j < i; j++) {
                buchstabe = buchstabe && isalpha(input[j]);
        }

        if (ersterbuchstabe && buchstabe && c != EOF && i > 1) {
                return 1;
        } else {
                return 0;
        }

}
