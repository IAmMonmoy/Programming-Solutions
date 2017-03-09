#include <stdio.h>
int main()
{
	long long int i,a,sum,n=1;
	while(scanf("%lld", &a) == 1) 
	{		
		sum = 0;
		if(n <= 1){
			printf("PERFECTION OUTPUT\n");
			n++;
		}
		if(a == 0) {
			printf("END OF OUTPUT\n");
		    break;
		}
		else{
			for(i = 1; i <= a/2; i++) {
				if(a % i == 0) {
					sum = sum + i;
				}
			}
			{
			if(a <= 9)
				printf("    ");
			else if(a <= 99)
				printf("   ");
			else if(a <= 999)
				printf("  ");
			else if(a <= 9999)
				printf(" ");
			
			else if(a <= 9999)
				printf(" ");
			printf("%lld  ", a);
			}
			if(sum == a)
				printf("PERFECT\n");
			else if(sum > a)
				printf("ABUNDANT\n");
			else
				printf("DEFICIENT\n");
		}		
		
	}
	return 0;
}
