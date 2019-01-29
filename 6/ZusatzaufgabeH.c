#include <stdio.h>
#include <ctype.h>

#define MIN 8
#define MAX 30

int read_password(char password[])
{
        int i = 0, c;
        while ((c = getchar()) != '\n' && (i < MAX - 1)) {
                if (!isprint(c) || c == ' ') {
                        return 0;
                }
                password[i] = c;
                i++;
        }
        if (i < 8 || getchar() != '\n')  {
                return 0;
        }
        password[i+1] = '\0';
        return 1;

}

int main(void)
{
        char array[MAX+1];
        int result;
        result = read_password(array);

        if (result == 0) {
                printf("Fehlerhafte Eingabe!\n");
                return 1;
        } else {
                printf("Korrekt!\n");
                printf("%s\n", result);
                return 0;
        }
}
