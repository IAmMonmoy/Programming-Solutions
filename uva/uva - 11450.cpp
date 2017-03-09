#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#define mset(c) memset(c,-1,sizeof(c))
using namespace std;
int total_money,nog,ara[25][25],dpp[202][22];
int dp(int i,int money)
{
	if(money < 0)
		return 0;
		
	if(i == nog)
		return total_money-money;
	
	if(dpp[money][i] != -1)
	{
			return dpp[money][i];	
	}
	
	int mnmy1=-1,mnmy2=-1;
	
	for(int j = 1; j <= ara[i][0]; j++)
	{
		if(money-ara[i][j] >= 0)
		{
			mnmy1 = dp(i+1,money-ara[i][j]);
		}
		
		mnmy2 = max(mnmy1,mnmy2);
		dpp[money][i] = mnmy2;
	}
	
	return dpp[money][i];
}
int main()
{
	int testcase;
	
	scanf("%d", &testcase);
	
	while(testcase--)
	{
		mset(dpp);
			
		scanf("%d %d", &total_money,&nog);
		
		for(int i = 0; i < nog; i++)
		{
			scanf("%d", &ara[i][0]);
			
			for(int j = 1; j <= ara[i][0]; j++)
			{
				scanf("%d", &ara[i][j]);
			}
			
		}
		
		int temp = dp(0,total_money);
		
		if(temp == -1)
			printf("no solution\n");
		
		else printf("%d\n",temp);
	}
	return 0;
}
