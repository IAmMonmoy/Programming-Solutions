#include <bits/stdc++.h>
using namespace std;
int main()
{
	map<string,string>mnmy;
	char x[110],y[110];
	int a,b;
	scanf("%d", &a);
	getchar();
	for(int i = 0; i < a; i++)
	{
		gets(x),gets(y);
		mnmy[x] = y;
	}
	scanf("%d", &b);
	getchar();
	for(int i = 0; i < b; i++)
	{
		gets(x);
		cout<<mnmy[x]<<endl;
	}
	return 0;
}
