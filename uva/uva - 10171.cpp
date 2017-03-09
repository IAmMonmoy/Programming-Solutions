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
		char find[200];
		for(int i = 0; i < 30; i++)
		{
			for(int j = 0; j < 30; j++)
			{
				mnmy[i][j]=inf;
				mnmy1[i][j]=inf;
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
				find[count]=e;
			}
			if(b == 'Y')
			{
					if(c == 'B')
					{
						mnmy[mp[d]][mp[e]]=min(en,mnmy[mp[d]][mp[e]]);
						mnmy[mp[e]][mp[d]]=min(en,mnmy[mp[e]][mp[d]]);
						mnmy[mp[d]][mp[d]]=0;
						mnmy[mp[e]][mp[e]]=0;
					}
					else
					{
						mnmy[mp[d]][mp[e]]=min(en,mnmy[mp[d]][mp[e]]);
						mnmy[mp[d]][mp[d]]=0;
						mnmy[mp[e]][mp[e]]=0;
					}
			}
		
			else
			{
					if(c == 'B')
					{
						mnmy1[mp[d]][mp[e]]=min(en,mnmy1[mp[d]][mp[e]]);
						mnmy1[mp[e]][mp[d]]=min(en,mnmy1[mp[e]][mp[d]]);
					}
					else
					{
						mnmy1[mp[d]][mp[e]]=min(en,mnmy1[mp[d]][mp[e]]);;
					}
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
					mnmy[i][j]=min(mnmy[i][j],mnmy[i][k]+mnmy[k][j]);
                    mnmy1[i][j]=min(mnmy1[i][j],mnmy1[i][k]+mnmy1[k][j]);
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
		{
			printf("%c",p[i].first);
			if(i!=p.size()-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
