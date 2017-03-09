#include <stdio.h>
int main()
{
    int a,ara[55],i,sum,total,cases=0;
    while(scanf("%d",&a)==1)
    {
        if(a==0)
            break;
        sum=0;
        for(i=0;i<a;i++)
        {
            scanf("%d", &ara[i]);
            sum+=ara[i];
        }
        sum/=a;
        total=0;
        for(i=0;i<a;i++)
        {
            if(ara[i]>sum)
                total+=ara[i]-sum;
        }
        printf("Set #%d\n",++cases);
        printf("The minimum number of moves is %d.\n",total);
        printf("\n");
    }
    return 0;
}
