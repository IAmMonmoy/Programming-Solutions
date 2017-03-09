#include <bits/stdc++.h>
using namespace std;
int main()
{
	int test,flag = 0;
	scanf("%d", &test);
	while(test--)
	{
		map<char,int>mp;
		vector<int>mnmy[30];
		char c,ch[3];
		cin>>c;
		getchar();
		int count=0,visited[30]={0};
		while(gets(ch)){
			
			if(ch[0]=='\0')
				break;
				
			mnmy[ch[0]-'A'].push_back(ch[1]-'A');
			mnmy[ch[1]-'A'].push_back(ch[0]-'A');
		}
		
		int result=0;
		for(int i = 0; i <= c-'A'; i++)
		{
			queue<int>q;
			if(!visited[i])
			{
				result++;
				q.push(i);
				visited[i]=1;
				while(!q.empty())
				{
					int m = q.front();
					q.pop();
					for(int j = 0; j < mnmy[m].size(); j++)
					{
						if(!visited[mnmy[m][j]])
						{
							visited[mnmy[m][j]]=1;
							q.push(mnmy[m][j]);
						}
					}
				}
			
			}
		}
		if(flag)
			printf("\n");
		flag = 1;
		printf("%d\n",result);
	}
	return 0;
}
