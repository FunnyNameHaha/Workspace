#include <stdio.h>
#include <limits.h>
#include <float.h>



int main(void)
{
        printf("Anzahl Byte fuer char: %lu\n", sizeof(char));
        printf("Anzahl Byte fuer short int: %lu\n", sizeof(short int));
        printf("Anzahl Byte fuer int: %lu\n", sizeof(int));
        printf("Anzahl Byte fuer long: %lu\n", sizeof(long));
        printf("Anzahl Byte fuer float: %lu\n", sizeof(float));
        printf("Anzahl Byte fuer double: %lu\n", sizeof(double));
        printf("Anzahl Byte fuer den Ausdruck: \"1 + 2\": %lu\n", sizeof(1 + 2));
        printf("Anzahl Byte fuer den Ausdruck: \"1 + 2.0\": %lu\n", sizeof(1 + 2.0 ));
        printf("Wertebereich fuer char: [%d, %d]\n", SCHAR_MIN, SCHAR_MAX);
        printf("Wertebereich fuer short int: [%d, %d]\n", SHRT_MIN, SHRT_MAX);
        printf("Wertebereich fuer int: [%d, %d]\n", INT_MIN, INT_MAX);
        printf("Wertebereich fuer long int: [%ld, %ld]\n", LONG_MIN, LONG_MAX);
        printf("Wertebereich fuer isnigned long int: [0, %lu]\n", ULONG_MAX);
        printf("Wertebereich fuer float: [%.f, %.f]\n", FLT_MIN, FLT_MAX);

        return 0;
}
