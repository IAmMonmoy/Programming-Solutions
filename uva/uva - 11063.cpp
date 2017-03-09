#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ara[110],n,cases=0;
	
	while(scanf("%d", &n)==1)
	{
		map<int,int>mnmy;
		int flag = 0;
		for(int i = 0; i < n; i++)
			scanf("%d", &ara[i]);
		for ( int i = 0; i < n - 1; i++ ) {
            if ( ara [i] < 1 || ara [i] >= ara [i + 1] ) {
                flag = 1;
                break;
            }
        }
        if(flag)
        	printf("Case #%d: It is not a B2-Sequence.\n\n",++cases);
        else
        {
        	flag = 0;
        	for(int i = 0; i < n; i++)
			{
				for(int j = i; j < n; j++)
				{
					int sum = ara[i]+ara[j];
					if(mnmy[sum] == 1)
					{
						flag = 1;
						break;
					}
					mnmy[sum]=1;
				}
			}
			
			if(flag == 0)
				printf("Case #%d: It is a B2-Sequence.\n\n",++cases);
			else
				printf("Case #%d: It is not a B2-Sequence.\n\n",++cases);
        }
	
	}

	return 0;
}
