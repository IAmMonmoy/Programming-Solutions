#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	while(getline(cin,x))
	{
		map<char,int>mnmy;
		map<char,int>::iterator it;
		vector<char>first;
		vector<char>second;
		for(int i = 0; i < x.size(); i++)
		{
			if(isalpha(x[i]))
				mnmy[x[i]]++;
		}
		int ans = 0;
		
		for(it = mnmy.begin(); it != mnmy.end(); ++it)
		{
			if(it->second > ans)
			{
				ans = it->second;
			}
		}
		
			for(it = mnmy.begin(); it != mnmy.end(); it++)
			{
				if(it->second == ans)
				{
					if(isupper(it->first))
						first.push_back(it->first);
					else
						second.push_back(it->first);
				}
			}
			
			sort(first.begin(),first.end());
			sort(second.begin(),second.end());
			
			for(int i = 0; i < first.size(); i++)
			{
				cout<<first[i];
			}
			for(int i = 0; i < second.size(); i++)
			{
				cout<<second[i];
			}
			cout<<" "<<ans<<endl;
	}
	return 0;
}
