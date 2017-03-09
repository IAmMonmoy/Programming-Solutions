#include <bits/stdc++.h>
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define inf 999999999
using namespace std;
vector<vii>mnmy;
vi dis,visited;
int main()
{
	int a,b,c,cases=0;
	string x,y;
	while(scanf("%d %d", &a, &b) == 2 && (a||b))
	{
		map<string,int>mp;
		int count=0;
		mnmy.assign(a,vii());
		dis.assign(a,0);
		visited.assign(a,0);
		for(int i = 0; i < b; i++)
		{
			cin>>x>>y>>c;
			if(!mp.count(x))
			{
				mp[x]=count;
				count++;
			}
			if(!mp.count(y))
			{
				mp[y]=count;
				count++;
			}
			mnmy[mp[x]].push_back(ii(mp[y],c));
			mnmy[mp[y]].push_back(ii(mp[x],c));
		}
		cin>>x>>y;
		dis[mp[x]]=inf;
		priority_queue<ii,vector<ii>, greater<ii> >q;
		q.push(ii(inf,mp[x]));
		while(!q.empty())
		{
			int u = q.top().second,v=q.top().first;
			q.pop();

			if(visited[u])
				continue;
			visited[u]=1;
			
			for(int i = 0; i < mnmy[u].size(); i++)
			{
				if(min(dis[u],mnmy[u][i].second) > dis[mnmy[u][i].first])
				{
					dis[mnmy[u][i].first] = max(min(dis[u],mnmy[u][i].second),dis[mnmy[u][i].first]);
					q.push(ii(dis[mnmy[u][i].first], mnmy[u][i].first));
				}
			}
		}
		printf("Scenario #%d\n",++cases);
		printf("%d tons\n\n",dis[mp[y]]);
	}
	return 0;
}
