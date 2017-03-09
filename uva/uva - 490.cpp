#include <bits/stdc++.h>
using namespace std;
int main()
{
	char x[110][110];
	int i = 0,big=0;
	while(gets(x[i]))
	{
		if(strcmp(x[i],"") == 0)
			break;
		int len = strlen(x[i]);
		if(len > big)
			big = len;
		i++;
	}
	for(int j = 0; j < big; j++)
	{
		for(int k = i-1; k >= 0; k--)
		{
			if(j >= strlen(x[k]))
				printf(" ");
			else
			printf("%c",x[k][j]);
		}
		printf("\n");
	}
	return 0;
}
