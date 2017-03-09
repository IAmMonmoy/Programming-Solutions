#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
vector<int>mnmy[110];
int graph(int m)
{
	int visited[102]={0};
	queue<pii>x;
	x.push(pii(m,0));
	visited[m]=1;
	int sum=0,i;
	while(!x.empty())
	{
		pii p = x.front();
		int u = p.first;
		int v = p.second;
		for(i = 0; i < mnmy[u].size(); i++)
		{
			if(!visited[mnmy[u][i]])
			{
				visited[mnmy[u][i]]++;
				sum+=v+1;
				x.push(pii(mnmy[u][i],v+1));
			}
		}
		x.pop();
	}
	return sum;
}
int main()
{
	int a,b,c,d,e,cases=0;
	while(scanf("%d %d", &a, &b) == 2 && (a||b))
	{
		map<int,int>mp;
		e = 1;
		if(!mp[a])
		{
			mp[a]=e;
			e++;
		}
		if(!mp[b])
		{
			mp[b]=e;
			e++;
		}
		mnmy[mp[a]].push_back(mp[b]);
		while(scanf("%d %d", &c, &d) == 2 && (c||d))
		{
			if(!mp[c])
			{
				mp[c]=e;
				e++;
			}
			if(!mp[d])
			{
				mp[d]=e;
				e++;
			}
			mnmy[mp[c]].push_back(mp[d]);
		}
		int sum = 0;
		for(int i = 1; i < e; i++)
			sum+=graph(i);
	
		printf("Case %d: average length between pages = %0.3lf clicks\n",++cases,double(sum)/(double)((e-1)*(e-2)));
		
		for(int i = 1; i < e; i++)
			mnmy[i].clear();
	}
	return 0;
}
