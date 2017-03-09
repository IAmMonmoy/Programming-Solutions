#include <bits/stdc++.h>
#define lli long long int
using namespace std;
lli ara[210000010];
int main()
{
	lli n;
	
	ara[0]=1,ara[1]=2,ara[2]=4;
	lli x = 3;
	for(lli i = 3; i <= 210000000; i++)
	{
		ara[i] = ara[i-1]+x;
		x++;
	}
	
	while(scanf("%lld", &n)==1)
	{
		if(n < 0)
			break;
		
		printf("%lld\n",ara[n]);
	}
	return 0;
}
