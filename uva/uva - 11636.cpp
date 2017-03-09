#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,cases=0,b,c,sum;
	while(scanf("%d", &a)==1)
	{
		if(a < 0)
			break;
		sum = 2,b=0,c=0;
		
		if(a < 2)
		{
			printf("Case %d: %d\n",++cases,0);
			continue;
		}
		
		while(b < a)
		{
			b += sum;
			sum = b;
			c++;
		}
		
		printf("Case %d: %d\n",++cases,c);
	}
	return 0;
}
