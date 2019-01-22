#include <stdio.h>
#include <math.h>

int teilaufgabe_d(int n);
int teilaufgabe_e(char *v, char* w);
int main(void)
{
        int n = 6;
        char v[20] = {'A', 'B', 'C', 'D'};
        char w[] = {'A', 'B', 'C'};
        int test1 = teilaufgabe_d(n);
        int test2 = teilaufgabe_e(v, w);
        printf("%d\n", test1);
        printf("%d\n", test2);
        return 0;
}
int teilaufgabe_d(int n)
{
        int t = 2;
        while(t <= sqrt(n)){
                if(n % t != 0){
                        t++;
                } else {
                        return 0;
                }
        }
        return 1;
}
int teilaufgabe_e(char *v, char *w)
{
        int i;
        int m = 256;
        for(i = 1; i <= m; i++){
                if(w[i] == v[i]){
                        return 0;
                }
        }
        return 1;
}
