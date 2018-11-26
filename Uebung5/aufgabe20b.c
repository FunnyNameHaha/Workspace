#include <stdio.h>

int main(void)
{

        return 0;
}

void my_strncat(char s[], const char ct[], int n)
{
        int i;
        int j;
        int countervons = 0;
        int countervonct = 0;
        for (i = 0; s[i] != '\0', i++) {
                countervons++;
        }
        for (i = 0; ct[i] != '\0', i++) {
                countervonct++;
        }
        for (i = countervons; i < (countervons + countervonct); i++) {
                for (j = 0; j < countervonct; i++)
                s[countervons] = ct[j];
        }

        s[countervons + countervonct] = '\0';
}
