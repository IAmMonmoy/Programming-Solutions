#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int ara[60],ara1[60];
	ara[0]=0,ara[1]=1;
	ara1[1] = 2,ara1[1] = 1;
	
	for(int i = 2; i <= 50; i++)
	{
		ara[i] = ara[i-1]+ara[i-2];
		ara1[i] = ara1[i-1] + ara[i];
	}
	ara1[0] = 0;
	long long int x;
	while(scanf("%lld", &x) == 1)
	{
		if(x == -1)
			break;
		printf("%lld %lld\n",ara1[x],ara1[x+1]);
	}
	return 0;
}
