#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int cases;
	long long int ara[100];
	ara[0] = 1;
	ara[1] = 2;
	ara[2] = 3;
	
	for(int i = 3; i <= 100; i++)
		ara[i] = ara[i-1] + ara[i-2];
	
	while(scanf("%d", &cases) == 1)
	{
		if(cases == 0)
			break;
			
		printf("%lld\n",ara[cases-1]);
	}
	return 0;
}
