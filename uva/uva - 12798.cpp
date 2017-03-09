#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int m,n,x;
	while(scanf("%d %d", &n, &m) == 2)
	{
		int ans = 0;
		for(int i = 0; i < n; i++)
		{
			int flag = 0;
			for(int j = 0; j < m; j++)
			{
				scanf("%d", &x);
				x>0?flag++:flag;
			}
			if(flag == m)
				ans++;
		}
		printf("%d\n",ans);
	}
	return 0;
}
