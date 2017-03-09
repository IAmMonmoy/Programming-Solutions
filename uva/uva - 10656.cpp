#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,ara[1001];
	while(scanf("%d", &a) == 1 && a)
	{
		int flag = 0;
		for(int i = 0; i < a; i++)
			scanf("%d", &ara[i]);
			
		for(int i = 0; i < a; i++)
		{
			if(ara[i] > 0)
			{
				if(flag)
					printf(" ");
				printf("%d",ara[i]);
				flag=1;
			}
		}
		if(flag == 0)
			printf("0");
		printf("\n");
	}
	return 0;
}
