#include <bits/stdc++.h>
using namespace std;
int main()
{
	char x[1010];
	while(scanf("%s", x) == 1)
	{
		if(strcmp(x,"0") == 0)
			break;
		int len = strlen(x),sum = 0;
	
		for(int i = 0 ; i < len; i++)
			sum+=(x[i]-'0');
		
		if(sum % 9 == 0)
		{
			int count=0,y;
			while(sum > 9)
			{
				count++;
				y=0;
				while(sum)
				{
					y+=sum%10;
					sum/=10;
				}
				sum=y;
			}
			printf("%s is a multiple of 9 and has 9-degree %d.\n",x,count+1);
		}
		else
			printf("%s is not a multiple of 9.\n",x);
	}
	return 0;
}
