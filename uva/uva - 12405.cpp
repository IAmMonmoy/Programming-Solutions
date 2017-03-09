#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char ara[1000];
	int testcase,scarecrow,para,j,cases=0;
	
	scanf("%d",&testcase);
	
	while(testcase--)
	{
		scarecrow = 0;
		
		scanf("%d",&para);
		
		getchar();
		
		for(j = 0; j < para; j++)
		{
			scanf("%c",&ara[j]);
		}
		
		for(int i = 0; i < j ; i++)
		{	
			if(ara[i] == '.')
			{
				scarecrow++;
				i+=2;
			}
		}
		
		printf("Case %d: %d\n",++cases,scarecrow);
	}
	return 0;
}
