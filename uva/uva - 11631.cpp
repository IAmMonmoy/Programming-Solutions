#include <bits/stdc++.h>
#define ll long long int
using namespace std;
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
int main()
{
	ll n,a,b,c,k,m;
	while(scanf("%lld %lld", &m, &n) == 2 && (m||n))
	{
		vector<pair<int,pair<int,int> > > mnmy;
		int sum = 0, sum1 = 0;
		uf dis(m);
		for(int i = 0; i < n; i++)
		{
			scanf("%lld %lld %d", &a, &b, &c);
			mnmy.push_back(make_pair(c,pair<int,int>(a,b)));
			sum+=c;
		}
		
		sort(mnmy.begin(),mnmy.end());
		
		for(int i = 0; i < mnmy.size(); i++)
		{
			pair<int,pair<int,int> > x = mnmy[i];
			if(!dis.issameset(x.second.first,x.second.second))
			{
				sum1+=x.first;
				dis.unionset(x.second.first,x.second.second);
			}
			
		}
		printf("%lld\n",sum-sum1);
	}
	return 0;
}
