#include <stdio.h>

int main(void)
{
char f[2], *r;
r = f;
*(r + 1) = 'X';
*r = *(f + 1) + 1;
r = r + 1;
printf("%c\n", f[1]);
printf("%p\n", r);
f[1] = *r;
printf("%c\n", f[1]);
printf("%p\n", r);
r = &f[0];
(*r)--;
(*f)++;
r = f + 1;
*f = *r;
return 0;
}
