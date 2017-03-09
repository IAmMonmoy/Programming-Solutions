#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	while(scanf("%lld",&n)==1 && n)
	{
		long long int a=1;
		while(a<n)
		{
			a=a*2;
			a++;
		}
		if(a==n)
			printf("Bob\n");
		else
			printf("Alice\n");
		
	}
	return 0;
}
