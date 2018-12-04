#include <stdio.h>
#include <ctype.h>
#include <limits.h>
#include <float.h>

#define ULONG_MIN 0

int main(void)
{
        printf("Anzahl Byte fuer char: %d\n", sizeof(char));
        printf("Anzahl Byte fuer short int: %d\n", sizeof(short));
        printf("Anzahl Byte fuer int: %d\n", sizeof(int));
        printf("Anzahl Byte fuer long int: %d\n", sizeof(long));
        printf("Anzahl Byte fuer float: %d\n", sizeof(float));
        printf("Anzahl Byte fuer double: %d\n", sizeof(double));
        printf("Anzahl Byte fuer den Ausdruck \"1 + 2\": %d\n", sizeof(1 + 2));
        printf("Anzahl Byte fuer den Ausdruck \"1 + 2.0\": %d\n", sizeof(1 + 2.0));
        printf("Wertebereich fuer char: [%d, %d]\n", CHAR_MIN, CHAR_MAX);
        printf("Wertebereich fuer short int: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
        printf("Wertebereich fuer int: [%d, %d]\n", INT_MIN, INT_MAX);
        printf("Wertebereich fuer long int: [%li, %li]\n", LONG_MIN, LONG_MAX);
        printf("Wertebereich fuer unsigned long int: [%d, %li]\n", ULONG_MIN, ULONG_MAX);
        printf("Wertebereich fuer float: [%.0f, %.0f]\n", -FLT_MAX, FLT_MAX);

        return 0;
}
