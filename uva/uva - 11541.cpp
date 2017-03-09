#include <bits/stdc++.h>
using namespace std;
int main()
{
	string x;
	int testcase,cases=0;
	
	cin>>testcase;
	
	while(testcase--)
	{	
		cin>>x;
		
		printf("Case %d: ",++cases);
		
		for(int i = 0; i < x.length() ; i++)
		{
			if(isalpha(x[i]))
			{
				char p = x[i];
				int product=0;
				
				while(!isalpha(x[i+1]) && x[i+1] != '\0')
				{
					product = product*10 + (x[i+1]-'0');
					i++;
				}
				
				for(int j = 0; j < product; j++)
					printf("%c",p);
			}
		}
		printf("\n");
	}
	return 0;
}
