#include <bits/stdc++.h>
using namespace std;
int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};
int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};
int main()
{
	char ara[102][102];
	int a,b;
	while(scanf("%d %d", &a, &b) == 2 && (a||b))
	{
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < b; j++)
			{
				cin>>ara[i][j];
			}
		}
		int count=0,k;
		for(int i = 0; i < a; i++)
		{
			for(int j = 0; j < b; j++)
			{
				if(ara[i][j] == '*')
				{
					for(k = 0; k < 8; k++)
					{
						int tx = i+fx[k];
						int ty = j+fy[k];
						if(tx >= 0 && tx < a && ty >= 0 && ty < b)
						{
							if(ara[tx][ty] == '*')
								break;
						}
					}
					if(k == 8)
						count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
