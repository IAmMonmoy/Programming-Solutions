#include <stdio.h>
int main()
{
	int n,c,i,j,num,a[1000],d;
	
	while(scanf("%d %d",&n,&c) == 2) {
		a[0] = 1;num = 1,d=0;
		while(num <= n) {
			i = 2;
			while(i <= num) {
				if(num % i == 0)
					break;
					i++;
				}
			
			if(i == num) {
				d++;
				a[d] = num;
			}
			num++;
		}
	printf("%d %d:",n,c);
	if((c*2)>(d+1))
    {
    for(j=0;j<=d;j++)
        printf(" %d",a[j]);
    }
        
	else if(d+1 % 2 == 0) {
			int x = d+1 - (c * 2);
			x = x / 2;
			for(j = x; j <= (d - x);j++) {
				printf(" %d",a[j]);
			}
		}
		else if(d+1 % 2 != 0){
			int x = d+1 - ((c*2) - 1);
			x = x / 2;
			for(j = x; j <= (d - x);j++) {
				printf(" %d",a[j]);
			}
		}
		printf("\n\n");
	}
	return 0;
}
