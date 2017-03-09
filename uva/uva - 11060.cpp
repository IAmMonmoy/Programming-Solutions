#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii;
int main()
{
	string x,y;
	int a,b,cases=0;
	while(scanf("%d", &a) == 1)
	{
		string str[110];
		int indegree[105]={0};
		map<string,int>mnmy;
		vector<int>connect[210];
		for(int i = 0; i < a; i++)
		{
			cin>>x;
			str[i]=x;
			mnmy[x]=i;
		}
		scanf("%d", &b);
		while(b--)
		{
			cin>>x>>y;
			int p = mnmy[x],q=mnmy[y];
			connect[p].push_back(q);
			indegree[q]++;
		}
		priority_queue<ii,vector<ii>,greater<ii> > pq;
		for(int i = 0; i < a; i++)
		{
			if(indegree[i] == 0)
			{
				pq.push(ii(0,i));
			}
		}
		vector<int>result;
		while(!pq.empty())
		{
			int x = pq.top().first,y = pq.top().second;
			result.push_back(y),pq.pop();
			for(int i = 0; i < connect[y].size(); i++)
			{
				int mn = connect[y][i];
				indegree[mn]--;
				if(indegree[mn] == 0)
					pq.push(ii(0,mn));
			}
		}
		cout<<"Case #"<<++cases<<": Dilbert should drink beverages in this order: ";
		for(int i = 0; i < result.size()-1; i++)
		{
			cout<<str[result[i]]<<" ";
		}
		cout<<str[result[result.size()-1]]<<"."<<endl<<endl;
	}
	return 0;
}
