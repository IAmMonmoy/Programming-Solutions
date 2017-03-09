#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue<int>mnmy;
	vector<int>p;
	int x;
	
	while(scanf("%d", &x)==1)
	{
		int i;
		
		if(x == 0)
			break;
		
		if(x == 1)
		{
			printf("Discarded cards:\nRemaining card: 1\n");
			continue;
		}
			
			
		for(i = 1; i <= x; i++)
			mnmy.push(i);
		
		while(mnmy.size() > 1)
		{
			p.push_back(mnmy.front());
			mnmy.pop();
			int temp = mnmy.front();
			mnmy.pop();
			mnmy.push(temp);
		}
		
		printf("Discarded cards: ");
		
		for(i = 0; i < p.size()-1; i++)
		{
			printf("%d, ",p[i]);	
		}
		
		printf("%d\n",p[i]);
		
		printf("Remaining card: %d\n",mnmy.front());
		mnmy.pop();
		
		p.clear();
	}
	return 0;
}
