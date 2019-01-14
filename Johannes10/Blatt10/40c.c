#include <stdio.h>

void stringlist_rev(char *list[], int n);
int main(void)
{
        int i;
        int n = 2;
        char *list[7] = {"Hallo", "ich", "bin", "Johannes", "aus", "der", "Zukunft"};
        stringlist_rev(list, n);
        for(i = 0; i < 7; i++) {
                printf("%s\n", list[i]);
        }
        return 0;
}
void stringlist_rev(char *list[], int n)
{
        char *helplist[1];
        int i;
        for(i = 0; i < n / 2; i++){
                helplist[0] = list[i];
                list[i] = list[n - i - 1];
                list[n - i -1] = helplist[0];
        }

}
