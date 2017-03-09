#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d;
	int cases=0,m;
	scanf("%d", &m);
	while(m--)
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		double x = b*(c+d);
		double y = a*c;
		x-=y;
		x/=d;
		if(x>=0 && x <= 10)
			printf("Case #%d: %0.2lf\n",++cases,x);
		else
			printf("Case #%d: Impossible\n",++cases);
	}
	return 0;
}
