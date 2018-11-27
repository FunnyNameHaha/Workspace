#include <stdio.h>

void strdel(char ct[], char c);

int main(void)
{

}

void strdel(char ct[], char c)
{
        int i;
        int j;
        int counter;

        for (i = 0; ct[i] != '\0'; i++) {
                counter++;
        }
        for (i = 0; ct[i] != '\0'; i++) {
                if (ct[i] == c) {
                        for (j = i; ct[j] != '\0'; j++) {
                                c[j+1] = c[j];
                                c[counter-1];
                        }
                        i = i - 1;
                }
        }
}
