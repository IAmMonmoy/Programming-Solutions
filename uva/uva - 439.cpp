#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
int visited[9][9];
int fx[]= {-2,-1, 1, 2, 2,1,-1,-2};
int fy[]= {-1,-2,-2,-1, 1,2, 2, 1};
int func(int a, int b, int x, int y)
{
	queue<pii>mnmy;
	mnmy.push(pii(a,b));
	visited[a][b]=0;
	while(!mnmy.empty())
	{
		pii v = mnmy.front();
		mnmy.pop();
		for(int i = 0; i < 8; i++)
		{
			int tx = v.first+fx[i];
			int ty = v.second+fy[i];
			if(tx>=1 && tx<= 8 && ty>=1 && ty<= 8 && visited[tx][ty]!=0)
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
	int a,b,c,d;
	char m[10],n[10];
    while(scanf("%s %s",m,n) == 2)
    {
        a=m[0]-96;
        b=m[1]-'0';
        c=n[0]-96;
        d=n[1]-'0';
		memset(visited,-1,sizeof(visited));
        printf("To get from %s to %s takes %d knight moves.\n",m,n,func(a,b,c,d));
    }
	return 0;
}
