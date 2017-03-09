#include <iostream>
#include <cstdio>
#include <algorithm>
int main()
{
    int a,ara[20],b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&b);
        for(int j=0;j<b;j++)
            scanf("%d",&ara[j]);

        int p = b/2;
        printf("Case %d: %d\n",i,ara[p]);
    }
    return 0;
}
