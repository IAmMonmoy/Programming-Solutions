#include <bits/stdc++.h>
using namespace std;
int main()
{
	int node,edge,a,b;
	while(scanf("%d", &node) && node)
	{
		map<int,int>coloring;
		vector<int>mnmy[210];
		scanf("%d", &edge);
		for(int i = 0; i < edge; i++)
		{
			scanf("%d %d", &a, &b);
			mnmy[a].push_back(b);
			mnmy[b].push_back(a);
		}
		queue<int>color;
		color.push(0);
		int temp=0,flag=0;
		while(!color.empty())
		{
			int u = color.front();
			if(coloring[u] == 0)
				coloring[u]=1;
			
			coloring[u]==1?temp=2:temp=1;
			
			for(int i = 0; i < mnmy[u].size(); i++)
			{
				int v = mnmy[u][i];
				if(coloring[v] == 0)
				{
					coloring[v]=temp;
					color.push(v);
				}
				else if(coloring[v] != temp)
				{
					flag = 1;
					break;
				}
			}
			color.pop();
			if(flag == 1)
				break;
		}
		if(flag == 1)
			printf("NOT BICOLORABLE.\n");
		else
			printf("BICOLORABLE.\n");
	}
	return 0;
}
