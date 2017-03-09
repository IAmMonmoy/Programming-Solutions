#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int ara[1001][1001],r,c;
int visited[1001][1001];
int fx[]={1,-1,0,0}; 
int fy[]={0,0,1,-1};
int func(int a, int b, int x, int y)
{
	queue<pii>mnmy;
	mnmy.push(pii(a,b));
	while(!mnmy.empty())
	{
		pii v = mnmy.front();
		mnmy.pop();
		for(int i = 0; i < 4; i++)
		{
			int tx = v.first+fx[i];
			int ty = v.second+fy[i];
			if(tx>=0 && tx<=r && ty>=0 && ty<=c && ara[tx][ty]!=-1 && visited[tx][ty]==0)
			{				
				visited[tx][ty]=visited[v.first][v.second]+1; 
				mnmy.push(pii(tx,ty));
			}
			if(tx == x && ty == y)
				return visited[tx][ty];
		}
	}
}
int main()
{
	int nmbr,rn,bn,cn,start1,start2,end1,end2;
	while(scanf("%d %d", &r, &c) == 2 && r && c)
	{
		memset(ara,0,sizeof(ara));
		memset(visited,0,sizeof(visited));
		scanf("%d", &nmbr);
		for(int i = 0; i < nmbr; i++)
		{
			scanf("%d %d",&rn,&bn);
			for(int j = 0; j < bn; j++)
			{
				scanf("%d",&cn);
				ara[rn][cn]=-1;
			}
		}
		scanf("%d %d", &start1, &start2);
		scanf("%d %d", &end1, &end2);
		printf("%d\n",func(start1,start2,end1,end2));
	}
	return 0;
}
