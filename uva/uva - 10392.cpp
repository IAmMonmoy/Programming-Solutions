#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll size = 6000000;
vector<ll>prime;
bitset<6000000>mnmy;
void sieve()
{
	mnmy.reset(),mnmy.flip();
	mnmy.set(0,0),mnmy.set(1,0);
	int p = sqrt(size);
	
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
    ll index = 0 , pf = prime[index];
    while(pf * pf <= x)
    {
        if(x % pf == 0)
        {
            while(x % pf == 0)
            {
                x/=pf;
                printf("    %lld\n",pf);
            }
        }
        pf = prime[++index];
    }

    if(x > 1)
        printf("    %lld\n",x);
}
int main()
{
    sieve();
    ll x;
    while(scanf("%lld", &x) == 1)
    {
    	if(x < 0)
    		break;
        fact(x);
        printf("\n");
    }
    return 0;
}

