#include <bits/stdc++.h>
using namespace std;
int main()
{
	int testcase;
	string x;
	
	scanf("%d", &testcase);
	
	while(testcase--)
	{
		cin>>x;
		
		if(x == "1" || x == "4" || x == "78")
			printf("+\n");
		else if(x[x.length()-1] == '5' && x[x.length()-2] == '3')
			printf("-\n");
		else if(x[0] == '9' && x[x.length()-1] == '4')
			printf("*\n");
		else if(x[0] == '1' && x[1] == '9' && x[2] == '0')
			printf("?\n");
	}
	return 0;
}
