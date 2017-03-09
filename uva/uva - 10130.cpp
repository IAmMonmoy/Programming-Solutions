#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#define mset(c) memset(c,-1,sizeof(c))
using namespace std;
int n,p[1001],w[1001],ara[101],g,dp[1001][32],m;
int func(int x, int weight)
{
	if(x == n)
		return 0;
	
	if(weight <= 0)
		return 0;
	
	int tmp1 = 0, tmp2 = 0;
	
	if(dp[x][weight] != -1)
		return dp[x][weight];
	
	if(weight-w[x] >= 0)
	{
		tmp1 = p[x] + func(x+1,weight-w[x]);
	}
	
	else tmp1 = 0;
	
	tmp2 = func(x+1,weight);
	
	dp[x][weight] = max(tmp1,tmp2);
	
	return dp[x][weight];
}
int main()
{
	int testcase;
	
	scanf("%d", &testcase);

	while(testcase--)
	{			
		memset(dp,-1,sizeof(dp));
		
		scanf("%d", &n);
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &p[i], &w[i]);
		}
		
		scanf("%d", &g);
		
		int sum = 0;
		
		for(int i = 0; i < g; i++)
		{
			scanf("%d", &m);
			sum += func(0,m);
		}
		
		printf("%d\n",sum);
	}
	return 0;
}
