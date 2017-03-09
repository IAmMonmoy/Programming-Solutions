#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x,y;
	set<string>mnmy;
	while(cin>>x)
	{
		int len = x.length();
		for(int i = 0; i < len; i++)
		{
			if(isalpha(x[i]))
			{
				y="";
				while(i<len && isalpha(x[i]))
				{
					y+=tolower(x[i]);
					i++;
				}
				mnmy.insert(y);
			}
		}
	}
	set<string>::iterator it;
	for(it=mnmy.begin(); it != mnmy.end(); ++it)
		cout<<*it<<endl;
	return 0;
}
