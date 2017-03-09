#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,ara[15],ara1[15],sum,cases=0;
    while(scanf("%d",&a)==1)
    {
        if(a<0)
            break;
        sum=0;
        ara[0] = a;
        for(int i=1;i<13;i++)
            scanf("%d",&ara[i]);
        for(int j=0;j<12;j++)
            scanf("%d",&ara1[j]);
        printf("Case %d:\n",++cases);
        for(int i=0;i<12;i++)
        {
            sum+=ara[i];
            if(sum>=ara1[i])
            {
                printf("No problem! :D\n");
                sum-=ara1[i];
            }
            else
                printf("No problem. :(\n");
        }
    }
    return 0;
}
