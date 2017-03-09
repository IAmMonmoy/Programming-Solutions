#include <iostream>
#include <cstdio>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    register int i,cases=0,j;
    int a, b, ara[10010], c, upper, lower, middle, flag;

    while(scanf("%d %d",&a,&b)==2)
    {

        if(a==0 && b==0)
            break;

        printf("CASE# %d:\n",++cases);

        for(i = 0; i < a; i++)
            scanf("%d",&ara[i]);

        sort(ara,ara+a);

        for(i = 0; i < b; i++)
        {
            scanf("%d",&c);

            flag = 0;

            for(j = 0; j < a; j++)
            {
                if(ara[j] == c)
                {
                    printf("%d found at %d\n", c, j+1);
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
            {
                printf("%d not found\n",c);
            }

        }

    }
    return 0;
}
