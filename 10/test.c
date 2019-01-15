#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char s[] = "4.5aaaa";
        printf("%f", strtod(s, NULL));
}
