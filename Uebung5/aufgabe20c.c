#include <stdio.h>

p int ispalindrom(const char ct[]);

int main(void)
{

}

int ispalindrom(const char ct[]) {

        int i;
        int counter;
        int max;

        for (i = 0; ct[i] != '\n'; i++) {
                counter++;
        }

        max = counter;

        for (i = 0; i < counter / 2; i++, max--) {
                if (ct[i] != ct[max]) {
                        return 0;
                }
        }

        return 1;
}
