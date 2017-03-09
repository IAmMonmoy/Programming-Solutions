#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char ch,str1[10000],str2[10000],i;
    while(1)
    {
        i=0;
        while(ch=getchar())
        {
            if(ch =='\n')
                break;
            ch = tolower(ch);
            if(ch>='a' && ch<='z')
            {
                str1[i] = ch;
                i++;
            }
            str1[i] ='\0';
        }
        if(strcmp(str1,"done")==0)
            break;
        int x = 0;
        for(int j=i-1;j>=0;j--)
        {
            str2[x] = str1[j];
            x++;
        }
        str2[x] = '\0';

        if(strcmp(str1,str2)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
    }
    return 0;
}
