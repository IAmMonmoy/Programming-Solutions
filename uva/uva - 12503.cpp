#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <cstring>
#include <string>
#define lli long long int
#define sc scanf
#define pr printf
using namespace std;
int main()
{
	int testcase,n,index,p,q;
	string x,y;
	
	map<int,string>mnmy;
	
	cin>>testcase;
	
	while(testcase--)
	{
		p = 0,q=1;
		
		cin>>n;
		
		for(int i = 0; i < n; i++)
		{
			cin>>x;
			
			if(x == "LEFT")
			{
				mnmy[q] = "LEFT";
				q++;
				p -= 1;
			}
			
			else if(x == "RIGHT")
			{
				mnmy[q] = "RIGHT";
				q++;
				p+=1;
			}
			
			else if(x == "SAME")
			{
				cin>>y>>index;
				
				if(mnmy[index] == "LEFT")
				{
						p -= 1;
						mnmy[q] = "LEFT";
						q++;
				}
				else if(mnmy[index] == "RIGHT")
				{
						p += 1;
						mnmy[q] = "RIGHT";
						q++;
				}
			}
		}
		
		mnmy.clear();
		
		cout<<p<<endl;
	}
	return 0;
}
