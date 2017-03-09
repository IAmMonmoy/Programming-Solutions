#include <bits/stdc++.h>
using namespace std;
int main()
{	
	int testcase,n,m,x;
	
	scanf("%d", &testcase);
	
	while(testcase--)
	{
		map<int,int>mnmy;
		
		scanf("%d %d", &n, &m);
		
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			mnmy[x]++;
		}
		
		int flag = 0;
		
		for(int i = 0; i < m; i++)
		{
			scanf("%d", &x);
			
			if(mnmy[x] > 0)
			{
				flag++;
				mnmy[x]--;
			}
		}
		
		printf("%d\n",n+m-flag*2);
	}	
	return 0;
}
