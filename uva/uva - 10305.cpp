#include <bits/stdc++.h>
using namespace std;
class toposort
{
	int a;
	vector<int>list[110];
	vector<bool>visited;
	stack<int>result;
	public:
		toposort(int m)
		{
			a = m;
			visited.assign(a,false);
		}
		void addedge(int m, int n)
		{
			list[m].push_back(n);
		}
		void topologicalsort()
		{
			for(int i = 1; i < a; i++)
			{
				if(!visited[i])
					dfs(i);
			}
		}
		void dfs(int m)
		{
			visited[m]=true;
			for(int i = 0; i < list[m].size(); i++)
			{
				if(!visited[list[m][i]])
					dfs(list[m][i]);
			}
			result.push(m);
		}
		void print()
		{
			while(!result.empty())
			{
				printf("%d ",result.top());
				result.pop();
			}
		}
};
int main()
{
    int m,n,a,b;
 	while(scanf("%d %d", &m, &n) == 2 && (m||n))
 	{
 		toposort g(m+1);
 		for(int i = 0; i < n; i++)
 		{
 			scanf("%d %d", &a, &b);
 			g.addedge(a,b);
 		}
 		g.topologicalsort();
 		g.print();
 		printf("\n");
 	}
    return 0;
}
