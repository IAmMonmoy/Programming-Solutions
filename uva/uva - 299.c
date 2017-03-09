#include <stdio.h>
int main()
{
	int a,b,i,j,m,x,k;
	int ara[20];

	scanf("%d", &a);

	for(i = 0; i < a; i++) {
		x = 0;
		scanf("%d", &b);
		for(j = 0; j < b; j++) {
			scanf("%d", &ara[j]);
		}
		for(k = 0; k < b; k++) {
			for(j = 0; j < b; j++) {
				if(j+1 != b) {
					if(ara[j] > ara[j+1]) {
						x++;
						m = ara[j];
						ara[j] = ara[j+1];
						ara[j + 1] = m;
					}
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n", x);
	}


}
