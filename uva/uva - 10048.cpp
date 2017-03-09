#include <bits/stdc++.h>
#define inf 999999999
using namespace std;
int main()
{
	int a,b,c,x,y,z,cases=0,flag=0;
	while(scanf("%d %d %d", &a, &b, &c) == 3)
	{
		if(a==0&&b==0&&c==0)
			break;
		int ara[101][101];
		
		for(int i = 0; i <= a; i++)
			for(int j = 0; j <= a; j++)
				ara[i][j]=inf;
				
		for(int i = 0; i <= a; i++)
			ara[i][i]=0;
		
		for(int i = 0; i < b; i++)
		{
			scanf("%d %d %d", &x, &y, &z);
			ara[x][y]=ara[y][x]=z;
		}
		
		for(int k = 1; k <= a; k++)
		{
			for(int i = 1; i <= a; i++)
			{
				for(int j = 1; j <= a; j++)
				{
					ara[i][j]=min(max(ara[i][k],ara[k][j]),ara[i][j]);
				}
			}
		}
		if(flag)
			printf("\n");
		flag = 1;
		printf("Case #%d\n",++cases);
		for(int i = 0; i < c; i++)
		{
			scanf("%d %d", &x, &y);
			if(ara[x][y] >= inf)
				printf("no path\n");
			else
				printf("%d\n",ara[x][y]);
		}
	}
	return 0;
}
