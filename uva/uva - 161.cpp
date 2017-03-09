#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ara[110];
	while(scanf("%d %d %d", &ara[0], &ara[1], &ara[2]) == 3)
	{
		if(ara[0] == 0 && ara[1] == 0 && ara[2] == 0)
			break;
		int i = 2;
		if(ara[i] != 0)
		{
			while(ara[i] != 0)
			{
				i++;
				scanf("%d", &ara[i]);
			}
		}
		bool flag = false;
		int x = *min_element(ara,ara+i);
		for(int j = x; j <= 18000; j++)
		{
			int cnt = 0;
			for(int k = 0; k < i; k++)
			{
				if(j%(2*ara[k]) < ara[k]-5)
					cnt++;
				else break;
			}
			
			if(cnt == i)
			{
				int S = j % 60; j /= 60;
				int M = j % 60; j /= 60;
				int H = j % 24;
				printf("%02d:%02d:%02d\n", H, M, S);
				flag = true;
				break;
			}
		}
		if (!flag)
			printf("Signals fail to synchronise in 5 hours\n");
	}
	return 0;
}
