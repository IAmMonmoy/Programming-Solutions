#include<bits/stdc++.h>
#define mst(m,i) memset(m,i,sizeof(m))
using namespace std;
class mnmy
{
public:
    int x,y,c,d;
    mnmy(int i,int j,int k,int l)
    {
        x=i,y=j,c=k,d=l;
    }
};
int nxt[][2]= {{-1,0},{0,1},{1,0},{0,-1}};
int same[][2]= {{1,3},{0,2},{1,3},{0,2}};
int N,M,sx,sy,dx,dy;
int visit[26][26][5][4];
string grap[30];
int bfs()
{
    int tx,ty,tc,td,ans=-1;
    queue<jk>qe;
    jk ob,tm;
    mst(visit,-1);
    visit[sx][sy][0][0]=0;
    ob.set_vl(sx,sy,0,0);
    qe.push(ob);
    while(!qe.empty())
    {
        tm=qe.front();
        qe.pop();
        if(ans!=-1) continue;
        if(visit[tm.x][tm.y][tm.c][same[tm.d][0]]==-1)
        {
            visit[tm.x][tm.y][tm.c][same[tm.d][0]]=visit[tm.x][tm.y][tm.c][tm.d]+1;
            ob.set_vl(tm.x,tm.y,tm.c,same[tm.d][0]);
            qe.push(ob);
        }
        if(visit[tm.x][tm.y][tm.c][same[tm.d][1]]==-1)
        {
            visit[tm.x][tm.y][tm.c][same[tm.d][1]]=visit[tm.x][tm.y][tm.c][tm.d]+1;
            ob.set_vl(tm.x,tm.y,tm.c,same[tm.d][1]);
            qe.push(ob);
        }
        tx=tm.x+nxt[tm.d][0];
        ty=tm.y+nxt[tm.d][1];
        tc=(tm.c+1)%5;
        td=tm.d;
        if((tx>=0&&tx<M)&&(ty>=0&&ty<N)&&grap[tx][ty]=='.'&&visit[tx][ty][tc][td]==-1)
        {
            visit[tx][ty][tc][td]=visit[tm.x][tm.y][tm.c][tm.d]+1;
            ob.set_vl(tx,ty,tc,td);
            qe.push(ob);
            if((tx==dx)&&(ty==dy)&&(tc==0)) ans=visit[tx][ty][tc][td];
        }
    }
    return ans;
}
int main()
{
    int tm,cas=1;
    while(scanf("%d %d",&M,&N) &&(M||N))
    {
        getchar();
        for(int i=0; i<M; i++)
            getline(cin,grap[i]);
        for(int i=0; i<M; i++)
            for(int j=0; j<N; j++)
            {
                if(grap[i][j]=='S')
                {
                    sx=i;
                    sy=j;
                    grap[i][j]='.';
                }
                if(grap[i][j]=='T')
                {
                    dx=i;
                    dy=j;
                    grap[dx][dy]='.';
                }
            }
        if(cas!=1) printf("\n");
        printf("Case #%d\n",cas++);
        tm=bfs();
        if(tm==-1) printf("destination not reachable\n");
        else printf("minimum time = %d sec\n",tm);
    }
    return 0;
}
