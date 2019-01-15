#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int i;
        char *pointer;
        char string[11];
        char c;
        double ret;
        for(i = 0; i < 10; i++){
                c = getchar();
                if (c == '\n'){
                        string[i] = '\0';
                        break;
                }
                string[i] = c;
        }
        ret = strtod(string, &pointer);
        printf("%f\n", ret);
        printf("%s\n", pointer);
        return 0;
}
