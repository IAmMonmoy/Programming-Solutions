#include <bits/stdc++.h>
#define ii pair<int,int>
#define vii vector<ii>
#define pii pair<double,ii>
#define vi vector<int>
using namespace std;
vector<pii>mnmy;
vii xy;
int n,s;
class uf
{
	vector<int>p,rank;
	int disjoint;
	public:
		uf(int n)
		{
			rank.assign(n,0);
			p.assign(n,0);
			disjoint = 1;
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
				disjoint++;
			}
		}
		
		int dis()
		{
			return disjoint;
		}
		
};
double kruskal()
{
	uf x(n+1);
	double sum = 0;
	for(int i = 0; i < mnmy.size() && x.dis(); i++)
	{
		pii pt = mnmy[i];
		if(x.dis() == n-s+1)
			break;
		if(!x.issameset(pt.second.first,pt.second.second))
		{
			x.unionset(pt.second.first,pt.second.second);
			sum = max(sum,pt.first);
		}
	}
	return sum;
}
int main()
{
	int t,m,a,b,c,cases=0,flag=0;
	scanf("%d\n", &t);
	while(t--)
	{
		mnmy.clear();
		xy.clear();
		scanf("%d %d",&s, &n);

		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &a, &b);
			xy.push_back(ii(a,b));
		}
	
		for(int i = 0; i < xy.size(); i++)
		{
			for(int j = i+1; j < xy.size(); j++)
			{
				double x = (xy[i].first-xy[j].first)*(xy[i].first-xy[j].first) + (xy[i].second-xy[j].second)*(xy[i].second-xy[j].second);
				mnmy.push_back(make_pair(sqrt(x),ii(i+1,j+1)));
			}
		}
		
		sort(mnmy.begin(),mnmy.end());
		
		printf("%0.2lf\n",kruskal());
	}
	return 0;
}
