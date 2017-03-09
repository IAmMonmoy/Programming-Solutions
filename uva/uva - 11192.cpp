#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
    int a,i,j;
    char str[200],str1[20];
    while(scanf("%d",&a))
    {
        if(a==0)
            break;
        int x = a;
        scanf("%s",str);
        int len = strlen(str);
        x = len/a;
        a = len/a;
        i=0;
        while(i<len)
        {
            int x = 0;
            for(j = i; j < a; j++)
            {
                str1[x]=str[j];
                x++;
            }
            for(int k=x-1; k >= 0; k--)
                printf("%c",str1[k]);

            i+=x;
            a+=x;
        }
        printf("\n");
    }
    return 0;
}
