#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <algorithm>
using namespace std;
int main()
{
	string x;
	int ara[100],testcase;
	
	scanf("%d", &testcase);
	
	getchar();
	
	while(testcase--)
	{
		vector<char>mnmy;
		
		for(int i = 0; i <= 26; i++)
			ara[i] = 0;
		
		getline(cin,x);
		
		for(int i = 0; i < x.length(); i++)
		{
			if(isalpha(x[i]))
			{
				x[i] = tolower(x[i]);
				ara[x[i]-97]++;
			}	
		}
			
		int x = ara[0];
		
		for(int i = 1; i <= 26; i++)
		{
			if(ara[i] > x)
			{
				x = ara[i];
			}
		}
		
		for(int i = 0; i <= 26; i++)
		{
			if(x == ara[i])
			{
				mnmy.push_back(i+97);
			}
				
		}
		
		sort(mnmy.begin(),mnmy.end());
		
		
		for(int i = 0; i < mnmy.size(); i++)
			printf("%c",mnmy[i]);
		
		printf("\n");
		
		mnmy.clear();
	}
	return 0;
}
