#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    long long int m,n,ans;
    scanf("%lld",&m);
    while(m--)
    {
        scanf("%lld",&n);
        ans = (n*567)/9;
        ans+=7492;
        ans*=235;
        ans/=47;
        ans -= 498;
        ans/=10;
        ans = ans%10;
        if(ans < 0)
            ans = -ans;
        printf("%d\n",ans);
    }

    return 0;
}

