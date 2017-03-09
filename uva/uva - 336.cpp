#include<bits/stdc++.h>
#define ll long long int
#define pii pair<int,int>
using namespace std;
int main()
{
	int a,x,y;
	int cases=0;
	while(scanf("%d", &a) == 1 && a)
	{
		vector<int>mnmy[100];
		int visited[35];
		int ara[35];
		map<int,int>m;
		int count = 1;
		for(int i = 0; i < a; i++)
		{
			scanf("%d %d", &x, &y);
			if(!m[x])
			{
				m[x]=count;
				ara[count]=x;
				count++;
			}
			if(!m[y])
			{
				m[y]=count;
				ara[count]=y;
				count++;
			}
			x=m[x],y=m[y];
			mnmy[x].push_back(y);
			mnmy[y].push_back(x);
		}
		while(scanf("%d %d", &x, &y) == 2 && (x||y))
		{
			memset(visited,0,sizeof(visited));
			queue<pii>result;
			result.push(pii(m[x],y));
			while(!result.empty())
			{
				pii v = result.front();
				int nmbr=v.first;
				visited[nmbr]=1;
				result.pop();
				if(v.second > 0)
					for(int i = 0; i < mnmy[nmbr].size(); i++)
					{
						if(!visited[mnmy[nmbr][i]])
						{
							visited[mnmy[nmbr][i]]=1;
							result.push(pii(mnmy[nmbr][i],v.second-1));
						}
					}
			}
			int final = 0;
			for(int i = 1; i < count; i++)
			{
				if(!visited[i])
					final++;
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",++cases,final,ara[m[x]],y);
		}
	}
	
	return 0;
}
