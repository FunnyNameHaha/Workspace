#include <stdio.h>

void strdel(char ct[], char c);

int main(void)
{

}

void strdel(char ct[], char c)
{
        int i;
        int counter;

        for (i = 0; ct[i] != '\0'; i++) {
                counter++;
        }
        for (i = 0; ct[i] != '\0'; i++) {
                if (ct[i] == c) {
                        for (i; ct[i] != '\0'; i++) {
                                c[i+1] = c[i];
                                c[counter-1];
                        }
                }
        }
}
