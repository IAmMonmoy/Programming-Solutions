#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long int a,i,j;
    long long int ara[1000];
    while(scanf("%lld",&a))
    {
        if(a<0)
            break;
        if(a==0)
            cout<<0;
        i=0;
        while(a != 0)
        {
            ara[i] = a%3;
            a/=3;
            i++;
        }
        for(j=i-1;j>=0;j--)
            printf("%lld",ara[j]);
        printf("\n");
    }

    return 0;
}
