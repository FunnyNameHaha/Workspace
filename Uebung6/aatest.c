#include <stdio.h>
int orakel(void)
{
static int s = 0;
return ++s;
}
int main(void)
{
orakel();
printf("%i", orakel());
return 0;
}
