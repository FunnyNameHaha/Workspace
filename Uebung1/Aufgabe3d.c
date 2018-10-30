#include <stdio.h>
#include <string.h>

int main (int argc, char * argv[])
{
        printf("Erster Kommandozeilenparameter: %s\n", argv[1]);
        printf(" %d", strlen(argv[1]));
        return 0;
}
