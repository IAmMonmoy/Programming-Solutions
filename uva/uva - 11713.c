#include <stdio.h>
#include <string.h>
int main()
{
    int a,x,i,len1,len2;
    char one[100],two[100];
    scanf("%d",&a);
    while(a--)
    {
        x=0;
        scanf("%s %s",one,two);
        len1 = strlen(one);
        len2 = strlen(two);
        if(len1 != len2)
            printf("No\n");

        else
        {
            for(i=0;i<len1;i++)
            {
                if(one[i] != two[i])
                {
                    if(((two[i] == 'a' || two[i] == 'e' || two[i] == 'i' || two[i] == 'o' || two[i] == 'u') && (one[i] == 'a' || one[i] == 'e' || one[i] == 'i' || one[i] == 'o' || one[i] == 'u')))
                        x = 1;
                    else
                    {
                     x=2;
                     break;
                    }
                }
            }
            if(x==2)
                printf("No\n");
            else
                printf("Yes\n");
        }
    }
    return 0;
}
