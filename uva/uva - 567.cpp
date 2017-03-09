#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>mnmy[25];
	int visited[25];
	int a,b,cases=0,l=1;
	while(scanf("%d", &a) != EOF)
	{
		for(int j = 0; j < a; j++)
		{
			scanf("%d", &b);
			mnmy[l].push_back(b);
			mnmy[b].push_back(l);
		}
		if(l == 19)
		{
			int u;
			scanf("%d", &u);
			printf("Test Set #%d\n",++cases);
			int x,y;
			int distance[22];
			
			for(int i = 0; i < u; i++)
			{
				memset(visited,-1,sizeof(visited));
				scanf("%d %d", &x, &y);
				queue<int>result;
				result.push(x);
				int flag=0;
				bool p = true;
				visited[x]=0;
				while(!result.empty())
				{
					int v = result.front();
					result.pop();
					for(int i = 0; i < mnmy[v].size() && p; i++)
					{
						int n = mnmy[v][i];
						if(visited[n] == -1)
						{
							visited[n]=visited[v]+1;
							result.push(n);
						}
						if(n == y)
						{
							flag =visited[n];
							break;
						}
					}
					if(flag != 0)
						break;
				}
				printf("%2d to %2d: %d\n",x,y,flag);
			}
			printf("\n");
			
			while(!result.empty())
				result.pop();
				
			for(int i = 1; i <= 20; i++)
				mnmy[i].clear();
			l = 0;
		}
		l++;
	}
	return 0;
}
