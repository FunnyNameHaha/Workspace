#include <stdio.h>
#include <ctype.h>

#define CHAR_MAX 20

int read_name(char input []);
int main(void)
{
        char input[CHAR_MAX];
        read_name(input);
        return 0;
}
int read_name(char input[])
{
        int i;
        char c;
        for(i = 0; i <= CHAR_MAX; i++)
        {
                c = getchar();

                if (c != '\n' && c != EOF) {
                        if (!isalpha(c)) {
                                printf("Nur Buchstaben\n");
                                return 0;
                        }
                        if (i > 0 &&isupper(c)) {
                                printf("Mit Kleinbuchstaben fortsetzen\n");
                        }
                        input[i] = c;
                        if (i == CHAR_MAX) {
                                printf("Maximale Zeichen beachten\n");
                                return 0;
                        }

                } else {
                        if (i == 0 || i == 1) {
                                printf("Mindestens zwei Zeichen");
                                return 0;
                        }
                        break;
                }
        }
        input[i] = '\0';

        if (islower(input[0])) {
                printf("Mit Großbuchstaben beginnen");
        }
        return 1;
}
