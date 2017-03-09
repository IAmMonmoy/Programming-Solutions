#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,result,p;
	
	while(scanf("%lld", &n)==1)
	{
		p = n/2;
		
		result = (n*(n+1))/2 + p;
		
		printf("%lld\n",result+result-2+result-4);
	}
	return 0;
}
