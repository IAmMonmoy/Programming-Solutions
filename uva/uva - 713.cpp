#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
	char str[210],ara[210];
	int testcase,i,result[500];
	
	scanf("%d",&testcase);
	
	while(testcase--)
	{
		scanf("%s %s",str,ara);
		
		int len1 = strlen(str);
		int len2 = strlen(ara);
		int x = 0, sum,remainder=0,j;
		
		if(len1 >= len2)
		{
			for(i = 0; i<len2; i++)
			{
				sum = (str[i] -'0') + (ara[i] - '0') + remainder;
				result[x] = sum % 10;
				remainder = sum/10;
				x++;
			}
			
			for(j = i; j < len1; j++)
			{
				sum = (str[j]-'0') + remainder;
				result[x] = sum%10;
				remainder = sum / 10;
				x++;
			}
			
			if(remainder > 0)
			{
				result[x] = remainder;
				x++;
			}
		}
		
		else if(len2 > len1)
		{
			for(i = 0; i<len1; i++)
			{
				sum = (str[i] -'0') + (ara[i] - '0') + remainder;
				result[x] = sum % 10;
				remainder = sum/10;
				x++;
			}
			
			for(j = i; j < len2; j++)
			{
				sum = (ara[j]-'0') + remainder;
				result[x] = sum%10;
				remainder = sum / 10;
				x++;
			}
			
			if(remainder > 0)
			{
				result[x] = remainder;
				x++;
			}
		}
		
		int p = 0;
		
		if(result[p] == 0)
		{
			while(result[p] == 0)
				p++;
		}
		
		for(i = p; i < x; i++)
		{
			printf("%d",result[i]);
		}
		
		printf("\n");
	}
	return 0;
}
