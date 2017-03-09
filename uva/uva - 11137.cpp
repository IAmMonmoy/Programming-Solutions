#include <bits/stdc++.h>
using namespace std;
long long dp[10010];
int main()
{
	int i, j, n, money;
	
	dp[0] = 1;
	for (i = 1; i <= 21; i++)
		for (j = i * i * i; j < 10000; j++)
			dp[j] += dp[j - i * i * i];
	while (scanf("%d", &money) == 1)
		printf("%lld\n", dp[money]);
	return 0;
}
