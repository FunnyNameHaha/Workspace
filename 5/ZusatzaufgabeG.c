#include <stdio.h>

int main(int argc, char * argv[])
{
        int i;
        if (argc < 3) {
                printf("\nNicht genügend Argumente!\n");
        }
        printf("\n");
        for (i = argc; i > 0; i--) {
                printf("%s\n", argv[i-1]);
        }
        return 0;
}
