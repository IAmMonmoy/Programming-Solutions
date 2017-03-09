#include <stdio.h>
int main()
{
	long long int a,b,x,y,z,carry;
	while(scanf("%lld %lld", &a, &b) == 2)
	{
		carry=0,z=0;
		if(a==0 && b==0)
		    break;
		while(a != 0 || b != 0)
		{
			x = a%10;
			y = b%10;
			if(x+y+z > 9)
			{
				z = 1;
				carry++;
			}
			else z = 0;
			a/=10;
			b/=10;
		}
		if(carry == 0)
		    printf("No carry operation.\n");
		else if(carry == 1)
		    printf("1 carry operation.\n");
		else
			printf("%lld carry operations.\n",carry);
	}
	return 0;
}
