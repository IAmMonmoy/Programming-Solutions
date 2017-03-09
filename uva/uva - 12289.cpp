#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int testcase,flag,flag1;
	char ch[100];
	
	scanf("%d",&testcase);
	
	while(testcase--)
	{
		flag = 0,flag1=0;
		
		scanf("%s",ch);
		
		int len = strlen(ch);
		
		if(len > 3)
		{
			printf("3\n");
			continue;
		}
			
		if(ch[0] == 't')
			flag++;
		if(ch[1] == 'w')
			flag++;
		if(ch[2] == 'o')
			flag++;
		
		if(flag >= 2)
			printf("2\n");
		else 
			printf("1\n");	
	}
	return 0;
}

