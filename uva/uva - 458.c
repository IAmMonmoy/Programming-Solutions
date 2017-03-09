#include <stdio.h>
#include <string.h>
int main()
{
    int a,i,len;
    char n[1000];
    while(gets(n))
    {
        len = strlen(n);
        for(i = 0; i < len; i++)
        {
            n[i] = n[i] - 7;
            printf("%c",n[i]);
        }
        printf("\n");
    }
    return 0;
}
