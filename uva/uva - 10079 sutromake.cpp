#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	lli n;
	
	while(scanf("%lld", &n)==1)
	{
		if(n < 0)
			break;
		
		printf("%lld\n",1+(n*(n+1)/2));
	}
	return 0;
}
