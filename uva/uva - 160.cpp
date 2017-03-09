#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int size = 100;
vector<int>prime;
map<int,int>result;
bitset<100>mnmy;
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
void divisors(int n)
{
	int index = 0,pf;
	pf = prime[index];
	
	while(pf * pf <= n)
	{
		while(n % pf == 0)
		{
			n/=pf;
			result[pf]++;
		}
		pf = prime[++index];
	}
	
	if(n != 1)
		result[n]++;
			
}
int main()
{
	sieve();
	int a;
	while(scanf("%d", &a) == 1)
	{
		if(a == 0)
			break;
		printf("%3d! =",a);
		for(int i = 2; i <= a; i++)
		{
			divisors(i);
		}
		map<int,int>::iterator it;
		int flag = 0;
		for(it = result.begin(); it != result.end(); ++it)
		{
			flag++;
			if(flag > 15)
			{
				printf("\n%9d",it->second);
				flag=0;
			}
			else
				printf("%3d",it->second);
		}
		printf("\n");
		result.clear();
	}
	return 0;
}
