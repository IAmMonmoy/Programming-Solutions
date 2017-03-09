#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int main()
{
	vector<int>mnmy[2502];
	int T,a,b,c,t;
	scanf("%d", &T);
	for(int i = 0; i < T; i++)
	{
		scanf("%d", &a);
		for(int j = 0; j < a; j++)
		{
			scanf("%d", &b);
			mnmy[i].push_back(b);
		}
	}
	scanf("%d", &t);
	while(t--)
	{
		bool visited[T+1];
		memset(visited,false,sizeof(visited));
		int result[T+1];
		memset(result,0,sizeof(result));
		scanf("%d", &c);
		queue<pii>q;
		visited[c]=true;
		q.push(pii(c,1));
		while(!q.empty())
		{
			pii v = q.front();
			int m = v.first;
			int n = v.second;
			q.pop();
			for(int i = 0; i < mnmy[m].size(); i++)
			{
				if(!visited[mnmy[m][i]])
				{
					visited[mnmy[m][i]]=true;
					q.push(pii(mnmy[m][i],n+1));
					result[n]++;
				}
			}
		}
		int res=0,day=0;
		for(int i = 1; i <= T; i++)
		{
			if(result[i]>res)
			{
				res=result[i];
				day=i;
			}
		}
		if(res == 0)
		{
			printf("0\n");
			continue;
		}
		printf("%d %d\n",res,day);
	}

	return 0;
}
