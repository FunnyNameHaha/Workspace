void my_strcpy(char s[], const char ct[])
{
        int i;
        for(i = 0; ct[i] != '\0'; i++)
        {
                s[i] = ct[i];
        }
        printf("%i\n", i);
        s[i] = '\0';
}
