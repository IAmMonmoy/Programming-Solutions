#include <bits/stdc++.h>
using namespace std;
int ara[1000010],ara1[1000010];
int main()
{
	int a,b;
	scanf("%d", &a);
	bool flag = false;
	for(int i = 0; i < a; i++)
	{
		scanf("%d", &b);
		for(int j =0; j < b; j++)
			scanf("%d %d", &ara[j], &ara1[j]);
		int sum = 0;
		stack<int>mnmy;
		for(int j = b-1; j >= 0; j--)
		{
			sum+=ara[j]+ara1[j];
			mnmy.push(sum%10);
			sum/=10;
		}
		if(flag)
			printf("\n");
		flag = true;
		while(!mnmy.empty())
		{
			printf("%d",mnmy.top());
			mnmy.pop();
		}
		printf("\n");
	}
	return 0;
}
