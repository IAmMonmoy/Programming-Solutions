#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll a,b;
	while(scanf("%lld %lld", &a, &b) == 2)
	{
		if(a > 1)
			b+=((a-1)*(a-1+1))/2;
			
		printf("%0.0lf\n",sqrt(b*2));
	}
	return 0;
}
