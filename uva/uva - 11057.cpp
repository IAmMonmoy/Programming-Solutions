#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#define lli long long int
using namespace std;
int main()
{
	lli ara[10010],n,m,i,j,p;
	
	vector < pair<lli , lli> >mnmy;	
	
	while(scanf("%lld", &n) == 1)
	{
		for(i = 0; i < n; i++)
			scanf("%lld", & ara[i]);
		
		scanf("%lld", &m);
		
		sort(ara,ara+n);
				
		for(i = 0; i < n; i++)
		{
			for(j = i+1; j < n; j++)
			{
				if(ara[i] + ara[j] == m)
				{
					p = ara[j] - ara[i];
					mnmy.push_back(pair<lli,lli>(p,ara[i]));
				}
			}
		}
		
		sort(mnmy.begin(),mnmy.end());
		
		printf("Peter should buy books whose prices are %lld and %lld.\n\n",mnmy[0].second,mnmy[0].first+mnmy[0].second);
		
		mnmy.clear();
	}
	return 0;
}
