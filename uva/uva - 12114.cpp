#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	double a,b;
	int cases = 0;
	while(scanf("%lf %lf", &b, &a) == 2)
	{
		if(a == 0 && b == 0)
			break;
		
		if(b <= 1)
		{
			printf("Case %d: :-\\\n",++cases);
			continue;
		}
			
		double x = a/b;
		double y = (a-1)/(b-1);
		x = min(x,1.00);
		y = min(y,1.00);
		
		if(x == y)
			printf("Case %d: :-|\n",++cases);
		else if(x < y)
			printf("Case %d: :-)\n",++cases);
		else if(x > y)
			printf("Case %d: :-(\n",++cases);
	}
    return 0;
}
