#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n;
	while(scanf("%d", &n) == 1)
	{
		if(n == 0)
			break;
		cin>>s;
		char c;
		int count = 2000010,temp,i,flag = 0;
		for(i = 0; i < n; i++)
		{
			int tt = 0;
			temp = 0;
			if(s[i] == 'Z')
			{
				printf("0\n");
				flag = 1;
				break;
			}
			else if(s[i] == 'R')
			{
				c = s[i];
				while(i < n && s[i] != 'D')
				{
					if(s[i] == 'Z')
					{
						printf("0\n");
						flag = 1;
						break;
					}
					temp++;
					i++;
						if(i >= n || s[i] == 'R')
					{
						tt = 1;
						break;
					}
				}
				i--;
			}
			else if(s[i] == 'D')
			{
				while(i < n && s[i] != 'R')
				{
					if(s[i] == 'Z')
					{
						flag = 1;
						printf("0\n");
						break;
					}
					temp++;
					i++;
					if(i >= n || s[i] == 'D')
					{
						tt = 1;
						break;
					}
				}
				i--;
			}
			
			if(flag == 1)
			{
				break;
			}
			if(temp < count && temp != 0 && tt != 1)
			{
				count = temp;
			}
		}
		if(flag != 1)
			printf("%d\n",count);
	}
	return 0;
}
