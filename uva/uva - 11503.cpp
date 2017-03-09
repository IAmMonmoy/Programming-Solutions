#include <bits/stdc++.h>
using namespace std;
class uf
{
	vector<int>p,setsize,rank;
	public:
		uf(int n)
		{
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
		int setSize(int i) {
			return setsize[findset(i)];
		}
		
};
int main()
{
	int t,a;
	char m[25],n[25];
	string x,y;
	scanf("%d", &t);
	while(t--)
	{
		map<string,int>mnmy;
		scanf("%d", &a);
		uf result(a*2);
		int count=0;
		for(int i = 0; i < a; i++)
		{
			scanf("%s %s",m,n);
			
			x = string(m);
			y = string(n);
			
			if(!mnmy.count(x))
				mnmy[x]=count++;
					
			if(!mnmy.count(y))
				mnmy[y]=count++;
			
			result.unionset(mnmy[x],mnmy[y]);
			
			printf("%d\n",result.setSize(mnmy[x]));
		}
		
	}
	return 0;
}
