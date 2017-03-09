#include <bits/stdc++.h>
using namespace std;
int main()
{
	int testcase,quotes,days,cases=0;
	char x[25];
	
	scanf("%d", &testcase);
	
	while(testcase--)
	{
		map<string,int>m;
		
		scanf("%d", &quotes);
		
		while(quotes--)
		{
			scanf("%s %d",x,&days);
			m[x] = days;
		}
		
		scanf("%d %s", &days,x);
		
		if(m[x] == 0 || m[x] > days+5)
			printf("Case %d: Do your own homework!\n",++cases);
		else if(m[x] <= days)
			printf("Case %d: Yesss\n",++cases);
		else if(m[x] <= days+5)
			printf("Case %d: Late\n",++cases);
	}
	return 0;
}
