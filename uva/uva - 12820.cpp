#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	int a,alpha[30],flag,count,cases=0;
	char str[100];
	
	while(scanf("%d",&a)==1)
	{
		
		count = 0;
			
		for(int i =0; i < a; i++)
		{
			
			for(int i = 0; i <= 26; i++)
				alpha[i] = 0;
			
			flag = 0;
			
			scanf("%s",str);
			 
			int len = strlen(str);
			int j;
			
				
			for(j = 0; j < len; j++)
				alpha[str[j] - 97]++;
			
			sort(alpha,alpha+26);
			
			if(alpha[24] == 0)
				continue;
			
			for(int i = 25; i >= 0; i--)
			{
				if(alpha[i] == 0)
					break;
				
				if(alpha[i] == alpha[i-1])
				{
					flag = 1;
					break;
				}
			}
			
			if(flag == 0)
				count++;
		}
		
		printf("Case %d: %d\n",++cases,count);
		
	}
	
	return 0;
}
