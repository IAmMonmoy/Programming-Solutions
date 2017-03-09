#include <bits/stdc++.h>
using namespace std;
struct date
{
	char name[20];
	int day;
	int month;
	int year;
};

bool compare(date a, date b)
{
	if(a.year == b.year)
	{
		if(a.month == b.month)
		{
			return a.day > b.day;
		}
		else return a.month > b.month;
	}
	else return a.year > b.year;
}
int main()
{
	int n;
	vector<date>mnmy;
	
	scanf("%d", &n);
	
	while(n--)
	{
		date mymy;
		cin>>mymy.name;
		
		scanf("%d %d %d",&mymy.day, &mymy.month, &mymy.year);
		mnmy.push_back(mymy);
		
	}
	
	sort(mnmy.begin(),mnmy.end(),compare);
		
	int x = mnmy.size()-1;
	
	printf("%s\n%s\n",mnmy[0].name,mnmy[x].name);
	return 0;
}
