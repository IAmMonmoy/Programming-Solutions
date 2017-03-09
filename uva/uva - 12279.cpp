#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int cases=0,test,ara[1000],n;
	
	while(scanf("%d", &test) == 1)
	{
		if(test == 0)
			break;
		
		for(int i = 0; i < test; i++)
			scanf("%d", &ara[i]);
		
		int gave = 0, supposedtogive=0;
		
		for(int i = 0; i < test; i++)
		{
			if(ara[i] == 0)
				gave++;
			else
				supposedtogive++;
		}
		
		printf("Case %d: %d\n",++cases,supposedtogive-gave);
	}
	return 0;
}
