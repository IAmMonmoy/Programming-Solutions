#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,ara[11][11],cases=0;
	while(scanf("%d", &a) == 1 && a)
	{
		for(int i = 0; i < a; i++)
			for(int j = 0; j < a; j++)
				scanf("%d", &ara[i][j]);
		
		int fst=0,lst=a-1,sum;
		
		printf("Case %d:",++cases);
		
		while(fst < lst)
		{
			sum = 0;
			for(int i = fst; i <= lst; i++)
				sum+=ara[fst][i]+ara[lst][i];
			
			for(int i = fst+1; i < lst; i++)
				sum+=ara[i][fst]+ara[i][lst];
			
			printf(" %d",sum);
			
			fst++,lst--;
		}
		
		if(fst == lst)
		{
			sum=ara[fst][lst];
			printf(" %d",sum);
		}
		printf("\n");
	}
	return 0;
}
