#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const int mx = 1e6 + 10;
ll ara[mx],ara1[mx],fnal[mx];
int main()
{
	int a,b,t,cases=0;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		for(int i = 0; i < a; i++)
			scanf("%lld", &ara[i]);
		for(int i = 0; i < a; i++)
		{
			scanf("%lld", &ara1[i]);
			fnal[i] = ara1[i]-ara[i];
		}
		ll ans = 0,nk=0;
		sort(fnal,fnal+a);
		for(int i = 0; i < a; i++)
		{
			if(fnal[i] <= 0 && nk < b)
				nk++;
			else
				ans+=fnal[i];
		}
		if(ans <= 0 )
        	printf("Case %d: No Profit\n",++cases);
        else 
			printf("Case %d: %lld\n",++cases,ans);
	}
	return 0;
}
