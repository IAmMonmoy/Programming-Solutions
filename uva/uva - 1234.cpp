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
	public:
		uf(int n)
		{
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
			}
		}
		
};
int kruskal()
{
	uf x(n);
	int sum = 0;
	for(int i = 0; i < mnmy.size(); i++)
	{
		pii pt = mnmy[i];
		if(!x.issameset(pt.second.first,pt.second.second))
		{
			x.unionset(pt.second.first,pt.second.second);
		}
		else
		{
			x.unionset(pt.second.first,pt.second.second);
			sum+=pt.first;
		}
	}
	return sum;
}
int main()
{
	int t,m,a,b,c,cases=0;;
	scanf("%d", &t);
	while(t--)
	{
		mnmy.clear();
		scanf("%d %d", &n, &m);
		for(int i = 0; i < m; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			a--,b--;
			mnmy.push_back(make_pair(c,ii(a,b)));
		}
		sort(mnmy.rbegin(),mnmy.rend());
		
		printf("%d\n",kruskal());
	}
	scanf("%d", &t);
	return 0;
}
