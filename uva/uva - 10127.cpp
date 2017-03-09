#include <bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{
	lli x,p;

	while(scanf("%lld", &x)==1)
	{
		if(x == 0)
		{
			printf("%d\n",0);
			continue;
		}
		if(x == 1)
		{
			printf("%d\n",1);
			continue;
		}

		int v = 0,count=0;

		while(1)
		{
			v = (v*10 + 1) % x;

			count++;

			if(v == 0)
			{
				printf("%d\n",count);
				break;
			}

		}

	}

	return 0;
}
