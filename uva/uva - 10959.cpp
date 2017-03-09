#include <bits/stdc++.h>
using namespace std;
 
int T, P, D, x, y;
queue<int> q;
int dist[1001];
vector<int> AdjList[1001];
 
void bfs() 
{
    memset(dist, -1, sizeof dist);
    q.push(0);
    dist[0] = 0;
    while(!q.empty()) {
        int u = q.front(); q.pop();
        for (int j=0 ; j<AdjList[u].size() ; j++) {
            int v = AdjList[u][j];
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
}
 
int main() 
{
    scanf("%d", &T);
    while (T--) 
	{
        scanf("%d %d", &P, &D);
        while (D--) 
		{
            scanf("%d %d", &x, &y);
            AdjList[x].push_back(y);
            AdjList[y].push_back(x);
        }
        bfs();
        for (int i=1 ; i<P ; i++)
            printf("%d\n", dist[i]);
        if (T) printf("\n");
        for(int i = 0; i <= P; i++)
        	AdjList[i].clear();
    }
    return 0;
}
