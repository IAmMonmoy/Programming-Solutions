#include <iostream>
#include <cstdio>
#define ll long long int
using namespace std;
int main()
{
	ll x,y;
	while(scanf("%lld %lld",&x,&y) == 2)
	{
	    if(x==0 && y==0)
            break;
		double p;
		ll q = x-y,e=y;
		double m = 1;
		for(ll i = x; i >= 1; i--,q--,e--)
		{
			m *= i;
			m /= double(q>1?q:1);
			m /= double(e>1?e:1);
		}

		printf("%lld things taken %lld at a time is %0.0lf exactly.\n",x,y,m);
	}
	return 0;
}
