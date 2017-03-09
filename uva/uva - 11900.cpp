#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,p,q,ara[40],test,cases=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d %d",&n,&p,&q);
        for(int i=0;i<n;i++)
            scanf("%d",&ara[i]);
        int x = 1,sum=0,flag=0;
        while(x <= p && x<=n)
        {
            sum += ara[x-1];
             if(sum > q)
             {
                x--;
                printf("Case %d: %d\n",++cases,x);
                flag=1;
                break;
             }
            x++;
        }
        if(flag == 0)
        printf("Case %d: %d\n",++cases,x-1);
    }
    return 0;
}
