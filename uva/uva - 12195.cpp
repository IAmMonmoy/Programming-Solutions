#include <bits/stdc++.h>
using namespace std;
int main()
{
	char x[210];
	map<char,double>mnmy;
	mnmy['W']=1,mnmy['H']=0.5,mnmy['Q']=0.25,mnmy['E']=0.125,mnmy['S']= 0.0625,mnmy['T']=0.03125,mnmy['X']=0.015625;
	while(scanf("%s",x) == 1)
	{
		double result=1;
		int count=0;
		if(strcmp(x,"*") == 0)
			break;
		int len = strlen(x);
		for(int i = 0; i < len; i++)
		{
			result = 0;
			if(x[i] == '/')
			{
				i++;
				while(i < len && x[i] != '/')
				{
					result+=mnmy[x[i]];
					i++;
				}
				i--;
			}
			if(result==1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
