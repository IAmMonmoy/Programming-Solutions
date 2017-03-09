#include <bits/stdc++.h>
#define inf 1e7
using namespace std;
int main()
{
	int a;
	while(scanf("%d", &a) == 1 && a)
	{
		char b,c,d,e;
		int count=0,en;
		int mnmy[30][30];
		int mnmy1[30][30];
		char track[30][30],find[200];
		for(int i = 0; i < 30; i++)
		{
			for(int j = 0; j < 30; j++)
			{
				mnmy[i][j]=inf;
				mnmy1[i][j]=inf;
				track[i][j] = 'X';
			}
		}
		map<char,int>mp;
		while(a--)
		{
			getchar();
			scanf("%c %c %c %c %d", &b, &c, &d, &e, &en);
			
			if(!mp[d])
			{
				mp[d]=++count;
				find[count]=d;
			}
			if(!mp[e])
			{
				mp[e]=++count;
				find[count]=d;
			}
			if(c == 'U')
			{
				mnmy[mp[d]][mp[e]]=en;
				mnmy1[mp[d]][mp[e]]=en;
				track[mp[d]][mp[e]]=b;
			}
			else if(c == 'B')
			{
				mnmy[mp[d]][mp[e]]=en;
				mnmy[mp[e]][mp[d]]=en;
				mnmy1[mp[d]][mp[e]]=en;
				mnmy1[mp[e]][mp[d]]=en;
				track[mp[d]][mp[e]]=b;
				track[mp[e]][mp[d]]=b;
			}
		}
		
		for(int i = 1 ; i <= count; i++)
			mnmy[i][i]=mnmy1[i][i]=0;
	
		for(int k = 1; k <= count; k++)
		{
			for(int i = 1; i <= count; i++)
			{
				for(int j = 1; j <= count; j++)
				{
					if(track[i][k] == 'Y' && track[k][j] == 'Y')
					{
						mnmy[i][j]=min(mnmy[i][j],mnmy[i][k]+mnmy[k][j]);
					}
				}
			}
		}
		for(int k = 1; k <= count; k++)
		{
			for(int i = 1; i <= count; i++)
			{
				for(int j = 1; j <= count; j++)
				{
					if(track[i][k] == 'M' && track[k][j] == 'M')
					{
						mnmy1[i][j]=min(mnmy1[i][j],mnmy1[i][k]+mnmy1[k][j]);
					}
				}
			}
		}
		getchar();
		vector<pair<char,int> >p;
		scanf("%c %c", &c, &d);
		int result = inf;
		for(int i = 1; i <= count; i++)
		{
			result = min(result,mnmy[mp[c]][i]+mnmy1[mp[d]][i]);
		}
		if(result>=inf)
		{
			printf("You will never meet.\n");
			continue;
		}
		for(int i = 1; i <= count; i++)
		{
			if(mnmy[mp[c]][i]+mnmy1[mp[d]][i] == result)
				p.push_back(pair<char,int>(find[i],result));
		}
		sort(p.begin(),p.end());
		printf("%d ",result);
		for(int i = 0; i < p.size(); i++)
			printf("%c ",p[i].first);
		printf("\n");
	}
	return 0;
}
