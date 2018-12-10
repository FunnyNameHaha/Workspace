a#include <stdio.h>
#include <ctype.h>

void calc_occurrences(char s[], int occurrences[]);

void print_occurrences(int occurrences[]);

void reset_occurrences(int occurrences[]);

int main(int argc, char * argv[])
{
        int occurences[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        int i = 1;

        printf("Dieses Programm berechnet die Anzahl an Ziffern in uebergebenen Kommandozeilenparametern\n\n");

        if (argc <= 1) {
                printf("ERROR - Bitte uebergeben Sie mindestens einen Kommandozeilenparameter\n");
                return 1;
        }

        while (i < argc) {
                printf("Kommandozeilenparameter %d: %s\n", i, argv[i]);
                calc_occurrences(argv[i], occurences);
                i++;
        }
        return 0;
}

void calc_occurrences(char s[], int occurrences[])
{
        int i;
        int counter = 0;
        for (i = 0; s[i] != '\0'; i++) {
                counter++;
        }

        for (i = 0; i < counter; i++) {
                if (isdigit(s[i])) {
                        switch (s[i]) {
                                case '0':
                                        occurrences[0]++;
                                        break;
                                case '1':
                                        occurrences[1]++;
                                        break;
                                case '2':
                                        occurrences[2]++;
                                        break;
                                case '3':
                                        occurrences[3]++;
                                        break;
                                case '4':
                                        occurrences[4]++;
                                        break;
                                case '5':
                                        occurrences[5]++;
                                        break;
                                case '6':
                                        occurrences[6]++;
                                        break;
                                case '7':
                                        occurrences[7]++;
                                        break;
                                case '8':
                                        occurrences[8]++;
                                        break;
                                case '9':
                                        occurrences[9]++;
                                        break;
                        }
                }
        }
        print_occurrences(occurrences);
}

void print_occurrences(int occurrences[])
{
        int i;
        for (i = 0; i < 10; i++) {
                printf("%d: %d\n", i, occurrences[i]);
        }
        reset_occurrences(occurrences);
}

void reset_occurrences(int occurrences[])
{
        int i;
        for (i = 0; i < 10; i++) {
                occurrences[i] = 0;
        }
}
