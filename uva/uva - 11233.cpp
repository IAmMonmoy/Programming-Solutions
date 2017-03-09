#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	char x[30],y[30];
	map<string,string>mp;
	scanf("%d %d", &a, &b);
	for(int i = 0; i < a; i++)
	{
		scanf("%s %s",x,y);
		mp[x]=y;
	}
	
	for(int i = 0; i < b; i++)
	{
		scanf("%s",x);
		int len = strlen(x)-1;
		if(mp[x] != "")
			cout<<mp[x]<<endl;
		else if(x[len] == 'y' && x[len-1] != 'a' && x[len-1] != 'e' && x[len-1] != 'i' && x[len-1] != 'o' && x[len-1] != 'u')
		{
			x[len]='i';
			x[len+1]= 'e';
			x[len+2]='s';
			x[len+3]='\0';
			printf("%s\n",x);
		}
		else if(x[len] == 'o' || x[len] == 's' || x[len] == 'x' || (x[len] == 'h' && x[len-1] == 'c') || (x[len] == 'h' && x[len-1] == 's'))
		{
			x[len+1] = 'e';
			x[len+2] = 's';
			x[len+3]='\0';
			printf("%s\n",x);
		}
		else
		{
			x[len+1] = 's';
			x[len+2] = '\0';
			printf("%s\n",x);
		}
	}
	return 0;
}
