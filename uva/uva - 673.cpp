#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	char c[200];
	getchar();
	while(n--)
	{
		stack<char>mnmy;
		int flag = 0;
		gets(c);
		int len = strlen(c);
		for(int i = 0; i < len; i++)
		{
			if(c[i] == '(' || c[i] == '[')
				mnmy.push(c[i]);
			else if(c[i] == ')' && !mnmy.empty() && mnmy.top() == '(')
				mnmy.pop();
			else if(c[i] == ']' && !mnmy.empty() && mnmy.top() == '[')
				mnmy.pop();
			else
				flag=1;
		}
		
		if(mnmy.empty() && flag == 0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}
