#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bitset<1110>mnmy;
vector<int>prime;
ll result[1000010]={0};
void sieve()
{
	mnmy.flip();
	mnmy[0]=0,mnmy[1] = 0;
	prime.push_back(2);
	for(ll i = 3; i <= 1100; i+=2)
	{
		if(mnmy[i])
		{
			for(ll j = i*i; j <= 1100; j+=i+i)
			{
				mnmy[j] = 0;
			}
			prime.push_back(i);
		}
	}
}
void factorization(int m)
{
	int index=0,pf=prime[index],count=0,n=m;
	while(pf*pf <= m)
	{
		if(m%pf == 0)
		{
			while(m%pf == 0)
			{
				count++;
				m/=pf;
			}
		}
		pf = prime[++index];
	}
	
	if(m > 1)
		count++;
		
	result[n] = result[n-1]+count;
}
int main()
{
	sieve();
	for(int i = 2; i <= 1000000; i++)
		factorization(i);
	int m;
	while(scanf("%d", &m) == 1)
	{
		printf("%d\n",result[m]);
	}
	return 0;
}
