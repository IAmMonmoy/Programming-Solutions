#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int ara[6],ara1[6];
	
	while(scanf("%d %d %d %d %d", &ara[0], &ara[1], &ara[2], &ara[3], &ara[4]) == 5)
	{
			int flag = 0;
			
			for(int i = 0; i < 5; i++)
			{
				scanf("%d", &ara1[i]);
				
				if(ara[i] == ara1[i])
					flag = 1;
			}
			
			if(flag == 1)
				printf("N\n");
			else
				printf("Y\n");
	}
	return 0;
}
