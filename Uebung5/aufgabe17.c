#include <stdio.h>

#define M_PI 3.14159265358979323846

int multiply(int a, int b);

int calc_number_of_digits(int n);

void print_rectangle(int lines, int columns);

void print_triangle(int n);

double sinus(double x, int precision);

int main(void)
{
        double a;
        int b;
        //scanf("%d", &a);
        scanf("%lf %d", &a, &b);
        //printf("Testergebnis %d", multiply(a, b));
        //printf("Testergebnis %d", calc_number_of_digits(a));
        //print_rectangle(a, b);
        //print_triangle(a);
        printf("Testergebnis %f", sinus(a, b));

        return 0;
}

int multiply(int a, int b) {

        int ergebnis = 0;
        int counter = a;
        int constant = a;
        int i;
        int j;

        while (b > 0) {
                while (counter > 0) {
                        ergebnis++;
                        counter--;
                }
                counter = constant;
                b--;
        }

        for (i = 0; i < b; i++) {
                for (j = 0; j < a; j++) {
                        ergebnis++;
                }
         }

        return ergebnis;
}

int calc_number_of_digits(int n)
{

        int counter = 0;

        while (n > 0) {
                n = n / 10;
                counter++;
        }

        return counter;

}

void print_rectangle(int lines, int columns)
{

        int temp = columns;

        while (lines > 0) {
                while (columns > 0) {
                        printf("0");
                        columns--;
                }
                columns = temp;
                printf("\n");
                lines--;
        }

}

void print_triangle(int n) {

        int counter = 1;
        int anzahlloops;

        while (n > 0) {
                anzahlloops = counter;
                while (anzahlloops > 0) {
                        printf("0");
                        anzahlloops--;
                }
                printf("\n");
                counter++;
                n--;
        }
}

double sinus(double x, int precision)
{

        int k = 2;
        int y;
        y = x * (1.0 - (x * x) / (M_PI * M_PI));

        while (k <= precision) {
                y = y * (1.0 - (x * x) / ((k * k) * (M_PI * M_PI)));
                k++;
        }

        return x;
}
