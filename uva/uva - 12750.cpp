#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,a,cases=0;
	char c;
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d", &a);
		int temp = 0,result=0;
		bool bl = false;
		for(int i = 0; i < a; i++)
		{
			cin>>c;
			if(bl)continue;
			if(c == 'W')
				temp = 0;
			else
			{
				temp++;
				if(temp == 3)
					bl = true;
			}
			result++;
		}
		if(!bl)
			printf("Case %d: Yay! Mighty Rafa persists!\n",++cases);
		else
			printf("Case %d: %d\n",++cases,result);
	}
	return 0;
}
