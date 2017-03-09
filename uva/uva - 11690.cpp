#include <bits/stdc++.h>
using namespace std;
int ara[10010],a;
class uf
{
	private:
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
					ara[x]+=ara[y];
					ara[y]=0;
				}
				else
				{
					p[x]=y;
					ara[y]+=ara[x];
					ara[x]=0;
					if(rank[x] == rank[y])
						rank[y]++;
				}
			}
		}
		int value()
		{
			for(int i = 0; i < a; i++)
			{
				if(ara[i] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
};
int main()
{
	int t,b,x,y;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		uf result(a);
		
		for(int i = 0; i < a; i++)
			scanf("%d", &ara[i]);
		
		for(int i = 0; i < b; i++)
		{
			scanf("%d %d",&x, &y);
			result.unionset(x,y);
		}
		if(result.value())
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}
