#include <bits/stdc++.h>
#define ii pair<int,int>
#define vii vector<ii>
#define pii pair<int,ii>
#define vi vector<int>
using namespace std;
vector<pii>mnmy;
int n,s;
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
	uf x(s+1);
	int sum = 0;
	for(int i = 0; i < mnmy.size(); i++)
	{
		pii pt = mnmy[i];
		if(!x.issameset(pt.second.first,pt.second.second))
			x.unionset(pt.second.first,pt.second.second);
		
		else
		{
			if(sum)
				printf(" %d",pt.first);
			else
				printf("%d",pt.first);
			sum=1;
		}
	}
	if(sum == 1)
		return 0;
	return 1;
}
int main()
{
	int t,m,a,b,c,cases=0,flag=0;
	cases=0;
	while(scanf("%d %d",&s, &n)==2 && (s||n))
	{
		cases=0;
		mnmy.clear();
		map<int,int>mp;
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d %d", &a, &b, &c);
			if(!mp.count(a))
				mp[a]=cases++;
			if(!mp.count(b))
				mp[b]=cases++;
			mnmy.push_back(make_pair(c,ii(mp[a],mp[b])));
		}
	
		sort(mnmy.begin(),mnmy.end());
		if(kruskal())
			printf("forest");
		printf("\n");
	}
		
	return 0;
}
