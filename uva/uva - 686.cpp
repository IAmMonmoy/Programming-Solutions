#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll size = 40000;
bitset<40000>mnmy;
vector<int>prime;
void sieve()
{
	mnmy.reset(),mnmy.flip();
	mnmy.set(0,0),mnmy.set(1,0);
	
	for(ll i = 2; i <= size; i++)
	{
		if(mnmy[i])
		{
			for(ll j = i * i; j <= size; j += i)
			{
				mnmy[j] = 0;

			}
			prime.push_back(i);
		}

	}

}
int main()
{
	sieve();
	int n;
	while(scanf("%d", &n)==1)
	{
		if(n == 0)
			break;

		int flag = 0;

		for(int i = 0; prime[i] < n; i++)
		{
			int x = n - prime[i];

			if(x < prime[i])
				break;

			if(mnmy[x])
			{
				flag++;
			}
		}

		printf("%d\n",flag);

	}
	return 0;
}

