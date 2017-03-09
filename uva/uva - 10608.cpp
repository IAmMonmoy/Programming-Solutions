#include <bits/stdc++.h>
using namespace std;
int a;
class uf
{
	private:
	vector<int>p,setsize,rank;
	int unique;
	public:
		uf(int n)
		{
			unique=1;
			setsize.assign(n,1);
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
			int m = findset(x), n=findset(y);
			if(x != y)
			{
				if(rank[x] > rank[y])
				{
					p[y]=x;
					setsize[m]+=setsize[n];
				}
				else
				{
					p[x]=y;
					setsize[n]+=setsize[m];
					if(rank[x] == rank[y])
						rank[y]++;
				}
			}
		}
		int setSize() {
			for(int i = 1; i <= a; i++)
				if(setsize[i]>unique)
					unique=setsize[i];
			return unique;
		}
		
};
int main()
{
	int t,b,x,y;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d %d", &a, &b);
		uf result(a+1);
		for(int i = 0; i < b; i++)
		{
			scanf("%d %d", &x, &y);
			result.unionset(x,y);
		}
		printf("%d\n",result.setSize());
	}
	return 0;
}
