#include <bits/stdc++.h>
using namespace std;
vector<int>mnmy[1000010];
int main()
{
	int a,b,c,d;
	while(scanf("%d %d", &a, &b) == 2)
	{
		for(int i = 0; i <= 1000001; i++)
			mnmy[i].clear();
			
		for(int i = 0; i < a; i++)
		{
			scanf("%d", &c);
			mnmy[c].push_back(i+1);
		}
		while(b--)
		{
			scanf("%d %d", &c, &d);
			if(mnmy[d].size() < c)
				printf("0\n");
			else
				printf("%d\n",mnmy[d][c-1]);
		}
	}
	return 0;
}
