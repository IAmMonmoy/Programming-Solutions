#include <stdio.h>
#include <math.h>
int main()
{
	long long int a,b,c,i,d,e;
	
	while(scanf("%lld %lld %lld", &a, &b, &c) == 3) {
		e = 1;
		d = a;
		for(i = b; i >= 1; i--) {
			a = d * e;
			e = a % c; 
			if(e == 0)
				break;
		}
		
		printf("%lld\n",e);
	}
}
