#include <ctype.h>

int ispalindrom(const char ct[]) {

        int i;
        int counter = 0;
        int max;

        for(i = 0; ct[i] != '\0'; i++) {
                counter++;
        }
 

        for(i = 0; i < counter; i++) {
                if (!(isalpha(ct[i]))) {
                        return 0;
                }
        }
       

        max = counter-1;

        
        counter = counter / 2;

        for(i = 0; i < counter - 1; i++, max--) {
                if (ct[i] != ct[max]) {
                        return 0;
                }
        }

        return 1;
}
