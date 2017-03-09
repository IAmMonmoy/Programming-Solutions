#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int main()
{
	string mf;
	int testcase,m,f;
	
	cin>>testcase;
	
	getchar();
	
	while(testcase--)
	{
		getline(cin,mf);
		
		m=0,f=0;
		
		for(int i = 0; mf[i] != '\0'; i++)
		{
			if(mf[i] == 'M')
				m++;
			else if(mf[i] == 'F')
				f++;
		}
		
		if(m==f && mf.length() > 2)
			cout<<"LOOP"<<endl;
		else
			cout<<"NO LOOP"<<endl;
	}
    
	return 0;
}
