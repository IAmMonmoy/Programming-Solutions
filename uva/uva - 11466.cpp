#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll size = 10000000;
vector<ll>prime;
bitset<10000000>mnmy;
void sieve()
{
	mnmy.reset(),mnmy.flip();
	mnmy.set(0,0),mnmy.set(1,0);

	for(ll i = 2; i <= size; i++)
	{
		if(mnmy[i])
		{
			for(ll j = i * i; j <= size; j+=i)
			{
				mnmy[j] = 0;
			}
			prime.push_back(i);
		}
	}
}
void fact(ll x)
{
    ll index = 0 , pf = prime[index],i = 0;
    while(pf * pf <= x)
    {
        if(x % pf == 0)
        {
            while(x % pf == 0)
            {
                x/=pf;
            }
            i++;
        }
        pf = prime[++index];
    }


    pf = prime[--index];

    if(x > 1)
    {
        pf = x;
        i++;
    }

    if(i < 2)
        printf("-1\n");
    else
        printf("%lld\n",pf);

}
int main()
{
    sieve();
    ll x;
    while(scanf("%lld", &x) == 1)
    {
        if(x == 0)
            break;
        if(x < 0)
            x*=-1;
        fact(x);
    }
    return 0;
}
