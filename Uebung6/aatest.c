#include <stdio.h>
#include <stdlib.h>

#define flushbuffer() ({\
        char c;\
        while ((c = getchar()) != '\n') {}\
})

#define tolower(a) ({\
        if (a >= 'A' && a <= 'Z') {\
                a = a + 32;\
        }\
})

int main(void)
{
flushbuffer();
}
