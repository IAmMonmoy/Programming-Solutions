#include <bits/stdc++.h>
using namespace std;
int p[25],m,n,result;
void recur(int x, int sum)
{
	if(result == n)
		return;
	if(sum == n)
		return;
	if(sum > n)
		return;
	if(x == m)
		return;

	for(int i = x; i < m; i++)
	{
		if(sum+p[i] <= n)
		{
			while(sum+p[i] <= n && i < m)
			{
				recur(i+1,sum+p[i]);
				if(sum+p[i] == n)
				{
					result = sum+p[i];
					break;
				}
				i++;
			}
		}
		if(result == n)
			break;
	}
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		result = 0;
		scanf("%d %d",&n, &m);
		for(int i = 0; i < m; i++)
			scanf("%d", &p[i]);
		sort(p,p+m);
		recur(0,0);
		if(result == n)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
