#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	string s[101],s1[17]={"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
	int a;
	
	cin>>a;
	
	for(int i = 0; i < a; i++)
	{
		cin>>s[i];
	}
	
	int count = 0;
	int p = 1;
	
	while(count < a)
	{
		for(int i = 0; i < 16; i++)
		{
			printf("%s: %s\n",s[p-1].c_str(),s1[i].c_str());
			p++;
			if(p > a)
				p = 1;
			count++;
		}
	}
	return 0;
	
}
