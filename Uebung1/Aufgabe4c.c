#include <stdio.h>

int main ()
{
        char b;
        int a;
        printf("Zeichen eingeben: ");
        scanf(" %c", &b);
        a = (int)b;
        printf("%d", a);
        return 0;
}
