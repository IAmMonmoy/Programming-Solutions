#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
	int testcase,len,sum,defolt,i;
	char str[1000];
	
	scanf("%d",&testcase);
	
	while(testcase--)
	{
		
		scanf("%s",str);
		
		len = strlen(str);
		sum = 0;
		
		for(i = 0; i < len; i++)
		{	
			if(str[i] == 'O')
			{
				defolt = 1;
				
				while(str[i] == 'O')
				{
					sum+=defolt;
					defolt++;
					i++;
				}
			}
		}
		
		printf("%d\n",sum);
	}
	
	return 0;
}
