#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m,n[110][110];
	while(scanf("%d", &m) == 1 && m )
	{
		int row = 0,col=0,r,c;
		for(int i = 0; i < m; i++)
		{
			int sum  = 0;
			for(int j = 0; j < m; j++)
			{
				scanf("%d", &n[i][j]);
				sum+=n[i][j];
			}
			if(sum&1)
			{
				r = i+1;
				row++;
			}
				
		}
		
		for(int i = 0; i < m; i++)
		{
			int sum  = 0;
			for(int j = 0; j < m; j++)
			{
				sum+=n[j][i];
			}
			if(sum&1)
			{
				c = i+1;
				col++;
			}
		}
		
		if(row == 1 && col == 1)
			printf("Change bit (%d,%d)\n",r,c);
		
		else if(row == 0 && col == 0)
			printf("OK\n");

		else
			printf("Corrupt\n");
	}
	return 0;
}
