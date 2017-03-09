#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    long long int a,ara[3],cases=0;
    scanf("%lld",&a);
    while(a--)
    {
        int flag=0;
        scanf("%lld %lld %lld",&ara[0],&ara[1],&ara[2]);
        sort(ara,ara+3);
        if(ara[2] >= ara[1] + ara[0])
        {
            printf("Case %lld: Invalid\n",++cases);
            continue;
        }
        else if(ara[0]<=0||ara[1]<=0||ara[2] <= 0)
        {
            printf("Case %lld: Invalid\n",++cases);
            continue;
        }
        for(int i=0;i<2;i++)
            if(ara[i] == ara[i+1])
                flag++;
        if(flag==2)
            printf("Case %lld: Equilateral\n",++cases);
        else if(flag == 1)
            printf("Case %lld: Isosceles\n",++cases);
        else
            printf("Case %lld: Scalene\n",++cases);
    }
    return 0;
}
