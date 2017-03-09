#include <bits/stdc++.h>
#define ii pair<int,int>
#define vii vector<ii>
#define pii pair<double,ii>
#define vi vector<int>
using namespace std;
vii xy;
int n;
int main()
{
	int  a,b,cases=0;
	double ara[201][201];
	while(scanf("%d", &n)==1 && n)
	{
		xy.clear();
		for(int i = 0; i < n; i++)
		{
			scanf("%d %d", &a, &b);
			xy.push_back(ii(a,b));
		}
	
		for(int i = 0; i < xy.size(); i++)
		{
			for(int j = 0; j < xy.size(); j++)
			{
				double x = (xy[i].first-xy[j].first)*(xy[i].first-xy[j].first) + (xy[i].second-xy[j].second)*(xy[i].second-xy[j].second);
				ara[i][j]=sqrt(x);
			}
		}
		
		for(int k = 0; k < n; k++)
		{
			for(int i = 0; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					ara[i][j]=min(max(ara[i][k],ara[k][j]),ara[i][j]);
				}
			}
		}
		printf("Scenario #%d\n",++cases);
		printf("Frog Distance = %0.3lf\n\n",ara[0][1]);
	}
	return 0;
}
