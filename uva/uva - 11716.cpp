#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    int t,i,j;
    char ch[100000],ch1[1000][1000];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        int index = 0;
        gets(ch);
        int len = strlen(ch);
        int x = sqrt(len);
        if(x*x != len)
            printf("INVALID");
        else
        {
            for(i=0;i<x;i++)
            {
                for(j=0;j<x;j++)
                {
                    ch1[i][j]=ch[index];
                    index++;
                }
            }
            for(i=0;i<x;i++)
            {
                for(j=0;j<x;j++)
                {
                    printf("%c",ch1[j][i]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
