#include <stdio.h>

void my_strcpy(char s[], const char ct[]);

int main(void)
{

}

void my_strcpy(char s[], const char ct[])
{
        int i;
        int j;
        for (i = 0; ct[i] != '\0'; i++) {
                s[i] = ct[i];
                j++;
        }
        s[j] = '\0';
}
