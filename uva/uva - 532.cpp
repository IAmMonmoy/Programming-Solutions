#include <bits/stdc++.h>
using namespace std;
bool visited[30][30][30];
char d[32][32][32];
int di[]={-1,1,0,0,0,0};
int dj[]={0,0,-1,1,0,0};
int dk[]={0,0,0,0,-1,1};
int x,y,z;
struct node
{
	int a;
    int b;
    int c;
    int cost;
    
    node(int x, int y, int z, int w)
    {
        a=x;
        b=y;
        c=z;
        cost=w;
    }
};
void bfs(int a, int b, int c)
{
	queue<node> q;
    
    q.push(node(a,b,c,0));
    
    memset(visited,false,sizeof(visited));
    
    visited[a][b][c]=true;
    
    int j,k,l,I,J,K;
    
    while(!q.empty())
    {
        node aux=q.front();
        q.pop();
        
        j=aux.a;
        k=aux.b;
        l=aux.c;
  
        if(d[j][k][l]=='E')
        {
            printf("Escaped in %d minute(s).\n", aux.cost);
            return;
        }
        
        for(int i=0;i<6;i++)
        {
            I=j+di[i];
            J=k+dj[i];
            K=l+dk[i];
            if(I>=0 && I<x && J>=0 && J<y && K>=0 && K<z && !visited[I][J][K] && d[I][J][K]!='#')
            {
                q.push(node(I,J,K,aux.cost + 1));
                visited[I][J][K]=true;
            }
        }
        
    }
    printf("Trapped!\n");
    return;
}
int main()
{
	while(true)
	{
		scanf("%d %d %d", &x, &y, &z);
		string temp;
		if(x== 0 && y == 0 && z == 0)
			break;
		int e,f,g;
		for(int i=0; i<x; i++)
        {
            for(int j=0; j<y; j++)
            {
                for(int k=0; k<z; k++)
                {
                    scanf(" %c",&d[i][j][k]);
                    if(d[i][j][k]=='S')
                    	e=i,f=j,g=k;
                }
            }
            getchar();
        }
		bfs(e,f,g);
	}
	return 0;
}
