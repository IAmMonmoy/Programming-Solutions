#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    char a[25];
    while(scanf("%s",a)==1)
    {
        int len = strlen(a);
        for(int i=0; i<len; i++)
        {
            if(a[i] == 'B'||a[i] == 'F'||a[i] == 'P'||a[i] == 'V')
            {
                while(a[i+1] == 'B'||a[i+1] == 'F'||a[i+1] == 'P'||a[i+1] == 'V')
                {
                     i++;
                }
                printf("1");
            }
            else if(a[i] == 'C'||a[i] == 'G'||a[i] == 'J'||a[i] == 'K'||a[i] == 'Q'||a[i] == 'S'||a[i] == 'X'||a[i] == 'Z')
            {
                 while(a[i+1] == 'C'||a[i+1] == 'G'||a[i+1] == 'J'||a[i+1] == 'K'||a[i+1] == 'Q'||a[i+1] == 'S'||a[i+1] == 'X'||a[i+1] == 'Z')
                {
                     i++;
                }
                 printf("2");
            }
            else if(a[i] == 'D'||a[i] == 'T')
            {
                while(a[i+1] == 'D'|| a[i+1] == 'T')
                {
                     i++;
                }
                printf("3");
            }
            else if(a[i] == 'L')
            {
                 while(a[i+1] == 'L')
                {
                     i++;
                }
                 printf("4");
            }
            else if(a[i] == 'M'||a[i] == 'N')
            {
                while(a[i+1] == 'M'||a[i+1] == 'N')
                {
                     i++;
                }
                 printf("5");
            }
            else if(a[i] == 'R')
            {
                while(a[i+1] == 'R')
                {
                    i++;
                }
                 printf("6");
            }
        }
        printf("\n");
    }
    return 0;
}
