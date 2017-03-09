#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
int prime(long long int a)
{
	
	long long int i;
	
	if(a == 0)
	   return 0;
	
	if(a == 1)
	    return 0;
	
	for(i = 2; i <= sqrt(a); i++)
		if(a % i == 0)
			return 0;
	
	return 1;
}

int main()
{
	long long int a,b,c,sum;
	while(scanf("%lld",&a)==1)
	{
	
		if(prime(a))
		{
			b = a;
			sum=0;
			while(b)
			{
				sum*=10;
				sum = sum + b % 10;
				b/=10;
			}
			if(a == sum)
			{
				printf("%lld\n",a*2);
				break;
			}
		}
		
		printf("%lld\n",a*2);
	}
	return 0;
}
