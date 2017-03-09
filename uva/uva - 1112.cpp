#include <bits/stdc++.h>
#define inf 1e7
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector <ii> vii;
typedef vector <int> vi;
int main()
{
	int test,n,e,t,x,c,a,b,flag=0;
	scanf("%d", &test);
	while(test--)
	{
		scanf("%d %d %d %d", &n, &e, &t, &x);
		vector<vii>mnmy;
		mnmy.assign(n+2,vii());
		while(x--)
		{
			scanf("%d %d %d", &a, &b, &c);
			mnmy[a].push_back(ii(b,c));
		}
		int count = 0;
		for(int i = 1; i <= n; i++)
		{
			vi dist;
			dist.assign(n+2,inf);
			priority_queue<ii,vector<ii>,greater<ii> > q;
			q.push(ii(i,0));
			dist[i]=0;
			while(!q.empty())
			{
				int u = q.top().first;
				int v = q.top().second;
				q.pop();
				if(v > dist[u])
					continue;
		
				for(int j = 0; j < (int)mnmy[u].size(); j++)
				{
					ii p = mnmy[u][j];
					if(p.second+dist[u] < dist[p.first])
					{
						dist[p.first]=p.second+dist[u];
						q.push(ii(p.first,dist[p.first]));
					}
				}
			}
			if(dist[e] <= t)
				count++;
		}
		if(flag)
			printf("\n");
		flag=1;
		printf("%d\n",count);
	}
	return 0;
}
