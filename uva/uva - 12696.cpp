#include <bits/stdc++.h>
using namespace std;
int main()
{
	double a,b,c,d;
	int n,count=0;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		if((a <= 56 && b <= 45 && c <= 25 && d <= 7) || (a+b+c <= 125 && d <= 7))
		{
			printf("1\n");
			count++;
		}
		else
			printf("0\n");
	}
	printf("%d\n",count);
	return 0;
}
