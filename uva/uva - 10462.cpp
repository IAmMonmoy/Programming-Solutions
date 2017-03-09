#include <bits/stdc++.h>
#define ii pair<int,int>
#define vii vector<ii>
#define pii pair<int,ii>
#define vi vector<int>
using namespace std;
vector<pii>mnmy;
int n;
class uf
{
	vector<int>p,rank;
	int disjoint;
	public:
		uf(int n)
		{
			disjoint = n;
			rank.assign(n,0);
			p.assign(n,0);
			for(int i = 0; i < n; i++)
				p[i]=i;
		}
		int findset(int i)
		{
			return (i == p[i]) ?  i :  findset(p[i]);
		}	
			
		bool issameset(int i, int j)
		{
			return findset(i)==findset(j);
		}
		
		void unionset(int i , int j)
		{
			int x = findset(i), y=findset(j);
			if(x != y)
			{
				if(rank[x] > rank[y])
				{
					p[y]=x;
				}
				else
				{
					p[x]=y;
					if(rank[x] == rank[y])
						rank[y]++;
				}
				disjoint--;
			}
		}
		int disjoints() {
			return disjoint;
		}
		
};
int kruskal(int index) {
    int MST = 0;
    uf x(n);
    for(int i = 0; i < mnmy.size(); i++) {
        pair<int, ii> front = mnmy[i];
        int a, b;
        a = front.second.first;
        b = front.second.second;
        if (i == index) continue;
        if (!x.issameset(a, b)) {
            MST += front.first;
            x.unionset(front.second.first, front.second.second);
        }
    }
    return x.disjoints() > 1 ? 1e9 : MST;
}
int main()
{
	int t,m,a,b,c,cases=0;;
	scanf("%d", &t);
	while(t--)
	{
		mnmy.clear();
		scanf("%d %d", &n, &m);
		vector<int>edge;
		uf x(n);
		for(int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			a--,b--;
			mnmy.push_back(make_pair(c,ii(a,b)));
		}
		sort(mnmy.begin(),mnmy.end());
		int mst1=0;
		for(int i = 0; i < mnmy.size(); i++)
		{
			pii m = mnmy[i];
			if (!x.issameset(m.second.first, m.second.second)) {
               	mst1 += m.first;
                x.unionset(m.second.first, m.second.second);
                edge.push_back(i);
            }
		}
		
		if(x.disjoints() > 1)
		{
			printf("Case #%d : No way\n",++cases);
            continue;
        }
        
        int mst2=1e9;
        
        for(int i = 0; i < edge.size(); i++)
        {
        	mst2=min(mst2,kruskal(edge[i]));
        }
        
        if (mst2 == 1e9) printf("Case #%d : No second way\n",++cases);
        else printf("Case #%d : %d\n",++cases, mst2);
	}
	return 0;
}
