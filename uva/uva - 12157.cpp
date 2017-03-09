#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int testcase,number,ara[100];
	
	scanf("%d",&testcase);
	
	for(int j = 1; j <= testcase; j++)
	{
		scanf("%d",&number);
		
		for(int i = 0; i < number; i++)
			scanf("%d",&ara[i]);
			
		int sum = 0, sum1 = 0;
		
		for(int i = 0; i < number; i++)
		{
			sum += (((ara[i]/30)+1)*10);
		}
		
		for(int i = 0; i < number; i++)
		{
			sum1 += (((ara[i]/60)+1)*15);
		}
		
		if(sum < sum1)
			printf("Case %d: Mile %d\n",j,sum);
		else if(sum1 < sum)
			printf("Case %d: Juice %d\n",j,sum1);
		else
			printf("Case %d: Mile Juice %d\n",j,sum1);
	}
	return 0;
}
