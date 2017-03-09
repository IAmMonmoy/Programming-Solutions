#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,result=0;
	char c,d[5],e;
	while(scanf("%d %c %d %c %s", &a, &c,&b,&e,d) != EOF)
	{
		if(strcmp(d,"?") == 0)
			continue;
		int m = atoi(d);
		if(c == '+')
		{
			if(a+b == m)
				result++;
		}
		else
		{
			if(a-b == m)
				result++;	
		}
	}
	printf("%d\n",result);
	return 0;
}
