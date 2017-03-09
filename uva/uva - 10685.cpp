#include <bits/stdc++.h>
using namespace std;
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
					if(setsize[m] > unique)
						unique = setsize[m];
				}
				else
				{
					p[x]=y;
					setsize[n]+=setsize[m];
					if(setsize[n] > unique)
						unique = setsize[n];
					if(rank[x] == rank[y])
						rank[y]++;
				}
			}
		}
		int setSize() {
			return unique;
		}
		
};
int main()
{
	int t,a,b;
	char m[32],n[32];
	string x,y;
	while(scanf("%d %d", &a, &b) == 2 && (a||b))
	{
		map<string,int>mnmy;
		uf result(a);
		int count=0;
		for(int i = 0; i < a; i++)
		{
			scanf("%s",m);
			
			x = string(m);
			
			if(!mnmy.count(x))
				mnmy[x]=count++;
		}
		
		for(int i = 0; i < b; i++)
		{
			scanf("%s %s",m,n);
			x = string(m);
			y = string(n);
			result.unionset(mnmy[x],mnmy[y]);
		}
		printf("%d\n",result.setSize());
	}
	return 0;
}
