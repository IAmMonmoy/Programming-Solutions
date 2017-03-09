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
double calc(double a, double b, double c,double d)
{
    double ans=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return ans;
}
int main()
{
    int t,n,i,j,cs=0;
    scanf("%d",&t);
    double dist[1005][2];
    while(t--)
    {
    	vector<pair<double,pair<int,int> > >mnmy;
        scanf("%d",&n);
		uf dis(101);
        for(i=0;i<n;i++) 
			scanf("%lf %lf",&dist[i][0],&dist[i][1]);


        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                  mnmy.push_back(make_pair(calc(dist[i][0],dist[i][1],dist[j][0],dist[j][1]),pair<int,int>(i,j)));
                

        sort(mnmy.begin(),mnmy.end());
		double sum = 0;
		for(int i = 0; i < mnmy.size(); i++)
		{
			pair<double,pair<int,int> > x = mnmy[i];
			if(!dis.issameset(x.second.first,x.second.second))
			{
				sum+=x.first;
				dis.unionset(x.second.first,x.second.second);
			}
    	}
		if(cs)
			printf("\n");
		cs=1;
        printf("%.2lf\n",sum);
    }

    return 0;
}
