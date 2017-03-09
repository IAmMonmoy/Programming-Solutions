#include <bits/stdc++.h>
#define cons 5
using namespace std;
int ara[] = {50,25,10,5,1};
int dp[7490][5];

int func(int i, int amount)
{
	if(i>=cons)
	{
		if(amount) return 0;
		else return 1;
	}
	
	if(!amount) return 1;
	
	if(dp[amount][i] != -1) return dp[amount][i];

	int temp = 0, temp1 = 0;
	
	if(amount-ara[i] >= 0) temp = func(i,amount-ara[i]);
	
	temp1 = func(i+1,amount);
	
	return dp[amount][i]=temp+temp1;  
}
int main()
{
	int n;
	memset(dp,-1,sizeof(dp));
	while(scanf("%d", &n) == 1)
		printf("%d\n",func(0,n));

	return 0;
}
