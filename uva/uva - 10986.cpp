#include <bits/stdc++.h>
#define inf 1e8
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef vector <ii> vii;
typedef vector <int> vi;
vector<vii>mnmy;
vi dist;
int main()
{
	int N,n,m,s,t,cases=0,a,b,w;
	scanf("%d", &N);
	while(N--)
	{
		scanf("%d %d %d %d", &n, &m, &s, &t);
		mnmy.assign(n, vii());
		for(int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &a, &b, &w);
			mnmy[a].push_back(ii(b,w));
			mnmy[b].push_back(ii(a,w));
		}
		dist.assign(n,inf);
		priority_queue<ii,vector<ii>,greater<ii> >p;
		dist[s]=0;
		p.push(ii(0,s));
		while(!p.empty())
		{
			int v = p.top().first;
			int u = p.top().second;
			p.pop();
			if(v > dist[u])
				continue;
			for(int i = 0; i < (int)mnmy[u].size(); i++)
			{
				ii x = mnmy[u][i];
				if(x.second+dist[u] < dist[x.first])
				{
					dist[x.first] = x.second + dist[u];
					p.push(ii(dist[x.first],x.first));
				}
			}
		}
		if(dist[t] == inf)
			printf("Case #%d: unreachable\n",++cases);
		else
			printf("Case #%d: %d\n",++cases,dist[t]);
	}
	return 0;
}
