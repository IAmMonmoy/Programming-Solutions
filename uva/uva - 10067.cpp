#include <bits/stdc++.h>
using namespace std;
 
int T, n, s, t, f[10000], F;
queue<int> q;
int dist[10000];
 
int read() {
   	int res = 0,a;
   	for(int i = 0; i < 4; i++)
   	{
   		scanf("%d", &a);
   		res = res*10+a;
   	}
    return res;
}
 
int bfs() {
    memset(dist, -1, sizeof dist);
	queue<int>q;
    dist[s] = 0;
    int count=0;
    q.push(s);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        int p = u;
        int v,k=1;
        for (int i=0 ; i<4 ; i++)
		{
            v = u/k;
            if(v%10 == 9)
            	v = u-k*9;
            else v = u+k;
            if (!f[v] && dist[v] == -1) {
                dist[v] = dist[u] + 1;
                if (v == t) return dist[v];
                q.push(v);
            }
          	v = u/k;
            if(v%10 == 0)
            	v = u+k*9;
            else v = u-k;
            if (!f[v] && dist[v] == -1) {
                dist[v] = dist[u] + 1;
                if (v == t) return dist[v];
                q.push(v);
            }
            k*=10;
        }
    }
    return -1;
}
 
int main() {
    scanf("%d", &T);
    while (T--) {
        memset(f, 0, sizeof f);
        s = read();
        t = read();
        scanf("%d", &n);
        while (n--) {
            F = read();
            f[F] = 1;
        }
        if (s == t) {
            printf("0\n");
            continue;
        }
        printf("%d\n", bfs());
    }
    return 0;
}    

