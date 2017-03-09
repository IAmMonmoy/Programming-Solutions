#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,testcase,cases=0;
	scanf("%d", &testcase);
	while(testcase--)
	{
		scanf("%d:%d %d:%d",&a,&b,&c,&d);
		int x = a*60 + b;
		int y = c*60 + d;
		scanf("%d:%d %d:%d",&e,&f,&g,&h);
		int p = e*60 + f;
		int q = g*60 + h;
		if((p >= x && p <= y) || (q >= x && q <= y) || (p >= x && q <= y))
			printf("Case %d: Mrs Meeting\n",++cases);
		else if((x >= p && y <= p) || (x >= q && y <= q) || (x >= p && y <= q))
			printf("Case %d: Mrs Meeting\n",++cases);
		else
			printf("Case %d: Hits Meeting\n",++cases);
	}
    return 0;
}
