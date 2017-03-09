#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
	int a,b,c,ara[200010],ara1[200010],i;
	
	while(scanf("%d %d",&a,&b)==2)
	{
		
		if(a == 0 && b == 0)
			break;
		
		for(i=0;i<a;i++)
			scanf("%d",&ara[i]);
		
		for(i=0;i<b;i++)
			scanf("%d",&ara1[i]);
		
		sort(ara,ara+a);
		sort(ara1,ara1+b);
		
		int j = 0,sum=0;
		
		for(i=0;i<b;i++)
		{
			if(ara1[i] >= ara[j] && j < a)
			{
				sum+=ara1[i];
				//j++;
				if(++j==a)
					break;
			}
		}
		
		if(j == a)
			printf("%d\n",sum);
		else
			printf("Loowater is doomed!\n");	
	}
		
    return 0;
}
