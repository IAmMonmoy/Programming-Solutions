#include <bits/stdc++.h>
using namespace std;
int visited[103][103];
string x[200];
int m,n;
void dfs(int p, int q)
{
	if(p < 0 || q < 0 || p >= m || q >= n || x[p][q] == '*' || visited[p][q] == 1)
		return;
	visited[p][q] = 1;
	dfs(p+1,q);
	dfs(p-1,q);
	dfs(p,q+1);
	dfs(p,q-1);
	dfs(p+1,q+1);
	dfs(p-1,q-1);
	dfs(p+1,q-1);
	dfs(p-1,q+1);
}
int main()
{
	while(scanf("%d %d", &m, &n) == 2)
	{
		if(m == 0 && n == 0)
			break;
		memset(visited,0,sizeof(visited));
		for(int i = 0; i < m; i++)
			cin>>x[i];
		int result = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(!visited[i][j] && x[i][j] == '@')
				{
					result++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",result);
	}
	return 0;
}
