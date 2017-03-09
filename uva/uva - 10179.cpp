#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll x = 32000;
bitset<32000>mnmy;
vector<int>prime;
void func()
{
	mnmy.flip();
	mnmy[0]=0,mnmy[1]=0;
	prime.push_back(2);
	for(ll i = 3 ; i <= x; i+=2)
	{
		if(mnmy[i])
		{
			for(ll j = i*i; j <= x; j+=i+i)
				mnmy[j]=0;
			prime.push_back(i);
		}
	}
}
ll eularphi(ll m)
{
	int index=0,pf=prime[index],ans=m;
	while(pf*pf<=m)
	{
		if(m%pf==0)
			ans-=ans/pf;
		while(m%pf==0)
			m/=pf;
		pf = prime[++index];
	}
	if(m!= 1)
		ans-=ans/m;
	return ans;
}
int main()
{
	func();
	ll m;
	while(scanf("%lld", &m) == 1 && m)
	{
		if(m == 1)
		{
			printf("0\n");
			continue;
		}
		printf("%lld\n",eularphi(m));
	}
	return 0;
}
