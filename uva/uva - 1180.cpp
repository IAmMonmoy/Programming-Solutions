#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	long long int y,x,a,i;
	while(scanf("%lld",&x)==1)
	{
		for(i=0;i<x;i++)
		{
			scanf("%lld,",&a);
			
			y = (pow(2,a-1)*(pow(2,a)-1));
			
			if(y==6)
				printf("Yes\n");
			else if(y==28)
				printf("Yes\n");
			else if(y==496)
				printf("Yes\n");
			else if(y==8128)
				printf("Yes\n");
			else if(y==33550336)
				printf("Yes\n");
			else if(y==8589869056)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	return 0;
}
