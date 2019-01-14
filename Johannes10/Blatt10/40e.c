# include <stdio.h>

int main(void)
{
        int *v = NULL;
        int n = 7;
        int res;
        int *x = v;
        int *y = v + n;
        if(array_create(&v, n) == '0'){
                printf("Fehler");
                return 1;
        }
        if(array_create(&v + n, n) == '0'){
                array_destroy(v);
                printf("Fehler");
                return 2;
        }
        array_init(v, n);
        array_init((v + n), n);
        res = mult_array(x, y, n);
        array_destroy(v);
        array_destroy(v + n);
        printf("Das Ergebnis ist: %d\n", res);

        return 0;
}
