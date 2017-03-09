#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,p;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		scanf("%d", &n);
		int b = 0;
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &p);
			p>b?b=p:b;
		}
		printf("Case %d: %d\n",i,b);
	}
	return 0;
}
