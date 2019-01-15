#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int i = 0;
        char input[11], *p;
        double value;
        printf("\n~~Bitte 10 Zeichen eingeben~~\n");
        while (1) {
                while (i != 10 && getchar() != '\n') {
                        input[0] = getchar();
                        i++;
                }
                input[i] = '\0';
        }
        value = strtod(input, p);
        return 0;
}
