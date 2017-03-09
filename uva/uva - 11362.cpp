#include <bits/stdc++.h>
using namespace std;
int func(string x,string y)
{
	int len = x.length();
	for(int i = 0; i < len; i++)
	{
		if(x[i] != y[i])
			return 0;
	}
	return 1;
}
int main()
{
	char x[12];
	int a,b;
	scanf("%d", &a);
	while(a--)
	{
		vector<string>mnmy;
		scanf("%d", &b);
		for(int i = 0; i < b; i++)
		{
			scanf("%s", x);
			mnmy.push_back(x);
		}
		sort(mnmy.begin(),mnmy.end());
		int i;
		for(i = 0; i < mnmy.size()-1; i++)
		{
			if(func(mnmy[i],mnmy[i+1]))
			{
				i = -1;
				break;
			}
		}
		if(i == -1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
