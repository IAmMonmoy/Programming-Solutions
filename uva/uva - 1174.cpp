#include <bits/stdc++.h>
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
	int n,a,b,c,k,j,count=0,test;
	char ch[10],ch1[10];
	string str,str1;
	scanf("%d", &test);
	while(test--)
	{
		vector<pair<int,pair<int,int> > > mnmy;
		map<string,int>mp;
		map<int,string>mp1;
		int cnt = 0,sum=0;
		
		getchar();	
		scanf("%d %d", &j, &k);
		
		uf dis(j);

		for(int i = 0; i < k; i++)
		{
			scanf("%s %s %d",ch, ch1, &c);
			str = string(ch);
			str1 = string(ch1);
			
			if(!mp.count(str))
				mp[str]=cnt++;
			if(!mp.count(str1))
				mp[str1]=cnt++;
			
			mnmy.push_back(make_pair(c,pair<int,int>(mp[str],mp[str1])));
		}
		
		sort(mnmy.begin(),mnmy.end());
		
		for(int i = 0; i < mnmy.size(); i++)
		{
			pair<int,pair<int,int> > x = mnmy[i];
			if(!dis.issameset(x.second.first,x.second.second))
			{
				sum+=x.first;
				dis.unionset(x.second.first,x.second.second);
			}
			
		}
		if(count)
			printf("\n");
		count = 1;
		printf("%d\n",sum);
	}
	return 0;
}
