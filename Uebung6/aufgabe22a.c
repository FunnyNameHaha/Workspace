#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

#define ULONG_MIN 0

int main(void)
{
        printf("Anzahl Byte fuer char: %d", sizeof(char));
        printf("Anzahl Byte fuer short int: %d", sizeof(short));
        printf("Anzahl Byte fuer int: %d", sizeof(int));
        printf("Anzahl Byte fuer long int: %d", sizeof(long));
        printf("Anzahl Byte fuer float: %d", sizeof(float));
        printf("Anzahl Byte fuer double: %d", sizeof(double));
        printf("Anzahl Byte fuer den Ausdruck \"1 + 2\": %d", sizeof(1 + 2));
        printf("Anzahl Byte fuer den Ausdruck \"1 + 2.0\": %d", sizeof(1 + 2.0));
        printf("Wertebereich fuer char: [%d, %d]", CHAR_MIN, CHAR_MAX);
        printf("Wertebereich fuer short int: [%d, %d]", SHRT_MIN, SHRT_MAX);
        printf("Wertebereich fuer int: [%d, %d]", INT_MIN, INT_MAX);
        printf("Wertebereich fuer long int: [%d, %d]", LONG_MIN, LONG_MAX);
        printf("Wertebereich fuer unsigned long int: [%d, %d]", ULONG_MIN, ULONG_MAX);
        printf("Wertebereich fuer float: [%d, %d]", -FLT_MAX, FLT_MAX);

        return 0;
}
