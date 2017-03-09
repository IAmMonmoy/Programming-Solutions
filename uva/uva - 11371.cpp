#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    char ara[20],ara1[20];

    while(scanf("%s", ara) == 1)
    {
        sort(ara,ara+strlen(ara));
        ll x=0,y=0, z = strlen(ara);

        int index = 0;

        while(ara[index] == '0')
            index++;

        x = x * 10 + (ara[index]-'0');

        for(int i = 0; i < index; i++)
            x*=10;

        for(int i = index+1; i < z; i++)
        {
            x = x*10 + (ara[i]-'0');
        }

        for(int i = z-1; i >= 0 ; i--)
        {
            y = y*10 + (ara[i]-'0');
        }

        printf("%lld - %lld = %lld = 9 * %lld\n",y,x,y-x,(y-x)/9);
    }
}
