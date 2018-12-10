void my_strncat(char s[], const char ct[], int n)
{

        int i;
        for(i = 0; s[i] != '\0'; i++)
        {
        }
        int j;
        for(j = 0; j < n; j++, i++)
        {
                s[i] = ct[j];
        }
        s[i] = '\0';
}
