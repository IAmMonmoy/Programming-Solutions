#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	long long int ara[5010],n;
	
	ara[0]=0,ara[1]=1;

	for(int i = 2; i <= 5000; i++)
		ara[i] = ara[i-1] + ara[i-2];
		
	while(scanf("%lld",&n) == 1)
	{
		printf("The Fibonacci number for %lld is %lld\n",n,ara[n]);
	}	
	return 0;
}
