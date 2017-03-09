#include <bits/stdc++.h>
using namespace std;
int main()
{
	int testcase,matches,win,lose,draw,abandoned,cases=0;
	char state;
	
	cin>>testcase;
	
	while(testcase--)
	{
		win = 0, lose = 0, draw = 0, abandoned = 0;
		
		cin>>matches;
		
		for(int i = 0; i < matches; i++)
		{
			cin>>state;

			if(state == 'B')
				win++;
			else if(state == 'W')
				lose++;
			else if(state == 'A')
				abandoned++;
			else if(state == 'T')
				draw++;
		}
		
		if(matches == abandoned)
			printf("Case %d: ABANDONED\n",++cases);
		else if(win == matches-abandoned)
			printf("Case %d: BANGLAWASH\n",++cases);
		else if(lose == matches - abandoned)
			printf("Case %d: WHITEWASH\n",++cases);
		else if(matches - abandoned == draw)
			printf("Case %d: DRAW %d %d\n",++cases,win,draw);
		else if(win == lose && win+lose+draw == matches-abandoned)
			printf("Case %d: DRAW %d %d\n",++cases,win,draw);
		else if(win > lose)
			printf("Case %d: BANGLADESH %d - %d\n",++cases,win,lose);
		else if(lose > win)
			printf("Case %d: WWW %d - %d\n",++cases,lose,win);
	}
	return 0;
}
