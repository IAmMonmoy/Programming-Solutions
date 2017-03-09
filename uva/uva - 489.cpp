#include <bits/stdc++.h>
using namespace std;
int main()
{
	char x[10000],y[10000];
	int round;
	while(scanf("%d", &round) == 1)
	{
		if(round == -1)
			break;
		scanf("%s %s",x,y);
		map<char,int>mnmy;
		int len=strlen(x),len1=strlen(y),win=0,lose=0,flag=0;
		for(int i = 0; i < len; i++)
			mnmy[x[i]]++;
		for(int i = 0; i < len1 && lose != 7; i++)
		{
			if(mnmy[y[i]] > 0)
			{
				win+=mnmy[y[i]];
				mnmy[y[i]] = -1;
			}
			else if(mnmy[y[i]]>=0)
				lose++;
		}
		
		if(win == len)
			printf("Round %d\nYou win.\n",round);
		else if(win < len && lose < 7)
			printf("Round %d\nYou chickened out.\n",round);
		else if(win < len)
			printf("Round %d\nYou lose.\n",round);
	}
	return 0;
}
