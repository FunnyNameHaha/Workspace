#include "ctype.h"

int isupper(int c)
{
        if (65 > c || c > 90) {
                return 0;
        }
        return 1;
}

int tolower(int c)
{
        if (65 <= c && c <= 90) {
                return c + 32;
        }
        return c;
}

int isalpha(int c)
{
        if ((65 <= c && c <= 90) || (97 <= c && c <= 122)) {
                return 1;
        }
        return 0;
}
