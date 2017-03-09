#include <bits/stdc++.h>
using namespace std;
int t;
class uf
{
	private:
	vector<int>p,rank,r;
	public:
		uf(int n)
		{
			r.assign(n,1);
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
					r[y]=0;
				}
				else
				{
					p[x]=y;
					r[x]=0;
					if(rank[x] == rank[y])
						rank[y]++;
				}
			}
		}
		int res()
		{
			int sum=0;
			for(int i = 1; i <= t; i++)
				sum+=r[i];
			return sum;
		}
};
int main()
{
	int q,a,b,cases=0;
	while(scanf("%d %d", &t, &q) == 2 && (t||q))
	{
		uf result(t+1);
		
		for(int i = 0; i < q; i++)
		{
			scanf("%d %d", &a, &b);
			result.unionset(a,b);
		}
		
		printf("Case %d: %d\n",++cases,result.res());
	}
	
	return 0;
}
