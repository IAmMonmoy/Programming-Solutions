#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int testcase,number,p,x,result[10];
	
	scanf("%d", &testcase);
	
	while(testcase--)
	{
		
		for(int i = 0; i < 10; i++)
			result[i] = 0;
		
		scanf("%d", &number);
		
		for(int i = 1; i <= number; i++)
		{
			p = i;
			while(p)
			{
				result[p%10]++;
				p/=10;
			}
		}
		
		printf("%d %d %d %d %d %d %d %d %d %d\n",result[0],result[1],result[2],result[3],result[4],result[5],result[6],result[7],result[8],result[9]);
	}
	return 0;
}
