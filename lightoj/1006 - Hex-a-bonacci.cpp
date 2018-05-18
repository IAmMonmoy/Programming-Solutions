/*
    TestCase
    5
    3 4 3 2 54 5 10000
    5
    3 2 1 5 0 1 9
*/
#include <stdio.h>
int main()
{
    int a, b, c, d, e, f,x,i,t,j,n;
    int dp[10001];
    scanf("%d", &t);
    for(j = 0; j < t; j++)
    {
        scanf("%d %d %d %d %d %d %d", &dp[0], &dp[1], &dp[2], &dp[3], &dp[4], &dp[5], &n);
 
        dp[0]=dp[0]% 10000007;
        dp[1]=dp[1]% 10000007;
        dp[2]=dp[2]% 10000007;
        dp[3]=dp[3]% 10000007;
        dp[4]=dp[4]% 10000007;
        dp[5]=dp[5]% 10000007;
 
        x= dp[0]+dp[1]+dp[2]+dp[3]+dp[4];
 
        for(i = 6; i <= n; i++)
        {
            x = x+dp[i-1];
            dp[i] = x%10000007;
            x = x-dp[i-6];
        }
               
        printf("Case %d: %d\n", j+1, dp[n]% 10000007);
    }
    return 0;
}