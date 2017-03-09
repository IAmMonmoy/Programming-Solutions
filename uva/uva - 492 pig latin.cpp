#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char latin[1000000];
    while(gets(latin))
    {
        int i=0,j=0;
        int len = strlen(latin);
        while(i < len)
        {
            if(latin[i] == 'a' || latin[i] == 'A' || latin[i] == 'e' || latin[i] == 'E' || latin[i] == 'i'|| latin[i] =='I' || latin[i] == 'o' || latin[i] == 'O' || latin[i] == 'u' || latin[i] == 'U')
            {
                    for(j=i;((latin[j] >='a' && latin[j] <='z') || (latin[j] >='A' && latin[j] <= 'Z')); j++)
                    {
                        printf("%c",latin[j]);
                        i++;
                    }
                    printf("ay");
            }
            else if(((latin[i] >='a' && latin[i] <='z') || (latin[i] >='A' && latin[i] <= 'Z')))
            {
                int x = i;
                for(j=i+1;((latin[j] >='a' && latin[j] <='z') || (latin[j] >='A' && latin[j] <= 'Z'));j++)
                {
                    printf("%c",latin[j]);
                    i++;
                }
                printf("%cay",latin[x]);
                i+=1;
            }
            else
            {
                while(!((latin[i] >='a' && latin[i] <='z') || (latin[i] >='A' && latin[i] <= 'Z')))
                {
                    if(latin[i] == '\0')
                        break;
                    printf("%c",latin[i]);
                    i++;
                }
            }
        }
        printf("\n");
    }
    return 0;
}
