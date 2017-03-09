#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,b,c,d,cases=0;
	scanf("%d",&t);
	while(t--)
	{
		char x;
		int ara[30]={0},index=27,result=0;
		scanf("%d %d %d %d", &a, &b, &c, &d);
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < b; j++)
			{
				cin>>x;
				ara[x-'A']++;
			}
		}
		sort(ara,ara+28);
		int p = ara[index];
		while(index > -1 && ara[index] == p)
		{
			result+=ara[index]*c;
			index--;
		}
		while(index > -1 && ara[index] > 0)
		{
			result+=ara[index]*d;
			index--;
		}
		
		printf("Case %d: %d\n",++cases,result);
	}
	return 0;
}
