#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int days,party,p[110],testcase,x[4000];
	
	scanf("%d",&testcase);
	
	while(testcase--)
	{
		for(int i = 0; i < 4000; i++)
			x[i] = 0;
			
		scanf("%d %d",&days,&party);
		
		for(int i = 0; i < party; i++)
			scanf("%d",&p[i]);
		
		int countday,count=0,countday1;
		
		for(int i = 0; i < party; i++)
		{
			countday=0,countday1=0;
			while(countday <= days)
			{
				countday+=p[i];
				countday1+=p[i];
				while(countday1 > 7)
					countday1 -= 7;
				if(x[countday] == 0 && countday <= days && countday1 != 6 && countday1 != 7)
				{
					count++;
					x[countday]=1;
				}
			}
		}
		
		cout<<count<<endl;
	}
	return 0;
}
