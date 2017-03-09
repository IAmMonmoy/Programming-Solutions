#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,n[1500];
	while(scanf("%d", &a) == 1 && a)
	{
		for(int i = 0; i < a; i++)
			scanf("%d", &n[i]);
		sort(n,n+a);
		bool flag = true;
		if(n[0] != 0)
			flag = false;

		for(int i = 0; i < a-1; i++)
		{
			if(n[i+1]-n[i] > 200)
			{
				flag = false;
				break;
			}
		}
		
		if(n[a-1] < 1322)
			flag = false;
		if(flag)
			printf("POSSIBLE\n");
		else
			printf("IMPOSSIBLE\n");
	}
	return 0;
}
