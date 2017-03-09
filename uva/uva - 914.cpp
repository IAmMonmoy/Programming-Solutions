#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int limit = 1000000;
bitset<1000020>mnmy;
void sieve()
{
    mnmy.flip();
    mnmy[0] = 0, mnmy[1] = 0;
    int len = sqrt(limit);

    for(ll i = 2; i <= len; i++)
    {
        if(mnmy[i])
        {
            for(ll j = i+i; j <= limit; j+=i)
                mnmy[j] = 0;
        }
    }
}

int main()
{
    sieve();

    int testcase,a,b;

    scanf("%d", &testcase);

    while(testcase--)
    {
        scanf("%d %d", &a, &b);
        map<int,int>x;

        int m = 0,q=0,n=0,count=0;

        for(int i = a; i <= b; i++)
        {
            if(mnmy[i])
            {
                if(m == 0)
                    m = i;
                else
                {
                    x[i-m]++;
                    m = i;
                }
               q++;
            }
        }
        if(q <= 1)
        {
            printf("No jumping champion\n");
            continue;
        }

        map<int,int>::iterator it;

        m = 0;

        for(it = x.begin(); it != x.end(); it++)
        {
            if(it->second > m)
            {
                 m = it->second;
                 n = it->first;
            }

        }

        for(it = x.begin(); it != x.end(); it++)
        {
            if(m == it->second)
                count++;
        }
        if(count > 1)
           printf("No jumping champion\n");
        else
            printf("The jumping champion is %d\n",n);

        x.clear();

    }
    return 0;
}
