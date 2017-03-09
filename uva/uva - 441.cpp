#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,ara[20];
	bool x = false;
	while(scanf("%d", &a) == 1 && a)
	{
		if(x)
			printf("\n");
		x = true;
		for(int i = 0; i < a; i++)
			scanf("%d", &ara[i]);
		for(int i = 0; i < a; i++)
		{
			for(int j = i+1; j < a; j++)
			{
				for(int k = j+1; k < a; k++)
				{
					for(int l = k+1; l < a; l++)
					{
						for(int m = l+1; m < a; m++)
						{
							for(int n = m+1; n < a; n++)
							{
								printf("%d %d %d %d %d %d\n",ara[i],ara[j],ara[k],ara[l],ara[m],ara[n]);
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
