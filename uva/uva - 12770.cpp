#include <bits/stdc++.h>
using namespace std;
int main()
{
	char x[510];
	while(scanf("%s",x) == 1)
	{
		map<char,int>mnmy;
		string result;
		if(strcmp(x,"#") == 0)
			break;
		int len = strlen(x),count=0;
		sort(x,x+len);
		for(int i = 0; i < len; i++)
		{
			char c = x[i];
			while(i < len && c == x[i])
			{
				mnmy[c]++;
				i++;
			}
			if(mnmy[c] % 2 != 0)
				count++;
			result+=c;
			i--;
		}
		int j = 0;
		int len1 = result.length();
		for(int i = 0; i < len1 && j < count-1; i++)
		{
			if(mnmy[result[i]]%2 != 0)
			{
				printf("%c",result[i]);
				mnmy[result[i]]++;
				j++;
			}
		}
		printf("\n");
	}
	return 0;
}
