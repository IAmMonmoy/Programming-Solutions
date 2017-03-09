#include <bits/stdc++.h>
#define ii pair<int,int>
#define vii vector<ii>
#define pii pair<double,ii>
#define vi vector<int>
#define inf 999999999
using namespace std;
vii xy;
int n;
vector<pii>mnmy;
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
double kruskal()
{
	uf dis(n+1);
	double sum;
	for(int i = 0; i < mnmy.size(); i++)
	{
		pair<double,pair<int,int> > x = mnmy[i];
		if(!dis.issameset(x.second.first,x.second.second))
		{
			sum = x.first;
			dis.unionset(x.second.first,x.second.second);
			if(dis.issameset(0,1))
				return sum;
		}
	}
}
int main()
{
	int  a,b,cases=0;
	while(scanf("%d", &n)==1 && n)
	{
		xy.clear();
		mnmy.clear();
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
				mnmy.push_back(make_pair(sqrt(x),ii(i,j)));
			}
		}
		
		sort(mnmy.begin(),mnmy.end());
		
		printf("Scenario #%d\n",++cases);
		printf("Frog Distance = %0.3lf\n\n",kruskal());
	}
	return 0;
}
