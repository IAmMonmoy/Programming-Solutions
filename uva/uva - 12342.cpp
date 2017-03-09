#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int cases=0,t;
	double a;
	scanf("%d", &t);
	while(t--)
	{
		double sum = 0;
		scanf("%lf", &a);
		a-=180000;
		if(a>0)
		{
			double x = a-300000;
			x>=0?sum+=((300000*10)/100):(sum+=((a*10)/100));
			a-=300000;
		}
	
		if(a > 0)
		{
			double x = a-400000;
			x>=0?sum+=((400000*15)/100):(sum+=((a*15)/100));
			a-=400000;
		}
		
		if(a > 0)
		{
			double x = a-300000;
			x>=0?sum+=((300000*20)/100):(sum+=((a*20)/100));
			a-=300000;
		}
	
		if(a > 0)
		{
			sum+=(a*25)/100;
		}

		int x = sum;
		if(sum > x)
			x+=1;
		if(x > 0 && x < 2000)
			x = 2000;
		printf("Case %d: %d\n",++cases,x);
	}
	return 0;
}
