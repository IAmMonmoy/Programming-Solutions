#include <bits/stdc++.h>
using namespace std;
int main()
{
	char x[1010],y[1010];
	while(gets(x))
	{
		gets(y);
		string result;
		map<char,int>first;
		int m = strlen(x);
		int n = strlen(y);
		for(int i = 0; i < m; i++)
		{
			first[x[i]]++;
		}
		for(int i = 0; i < n; i++)
		{
			if(first[y[i]]>0)
			{
				result+=y[i];
				first[y[i]]--;
			}
		}
		sort(result.begin(),result.end());
		cout<<result<<endl;
	}
	return 0;
}
