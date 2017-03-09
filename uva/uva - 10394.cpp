#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll size = 20000000;
vector<ll>prime;
vector< pair<ll,ll> >result;
bitset<20000000>mnmy;
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
	
	for(ll i = 0; i < prime.size(); i++)
	{
		if(prime[i]+2 == prime[i+1])
		{
			result.push_back(pair<ll,ll>(prime[i],prime[i+1]));
		}
	}
}
int main()
{
	ll a;
	sieve();
	
	while(scanf("%lld", &a) == 1)
	{
		printf("(%lld, %lld)\n",result[a-1].first,result[a-1].second);
	}
	return 0;
}
