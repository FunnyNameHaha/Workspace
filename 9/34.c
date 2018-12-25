#include <stdio.h>

int read_interval(double *p)
{
        int status;
        double user_input;
        status = scanf("%lf", &user_input);

        if (status != 1 || user_input < -2.5 || user_input > 2.5 || getchar() != '\n') {
                while (getchar() != '\n') {}
                return 1;
        } else {
                *p = user_input;
                return 0;
        }
}

int main(void)
{
        int status_function;
        double user_input;
        double *p = &user_input;

        status_function = read_interval(p);
        if (status_function == 1) {
                printf("Die Eingabe war falsch!\n");
                return 1;
        }
        printf("%f", user_input);
        return 0;
}
