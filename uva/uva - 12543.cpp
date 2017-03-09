#include <bits/stdc++.h>
using namespace std;
int main()
{
	string word,strword,resword;
	int result = 0;

	while(cin>>word)
	{
		if(word == "E-N-D")
			break;
			
		int len = word.length(),i=0;
		
		for(int i = 0; i < len; i++)
		{
			int count=0;
			strword="";
			if(isalpha(word[i]))
			{
				while(i<len && (isalpha(word[i])|| word[i]=='-'))
				{
					strword+=tolower(word[i]);
					count++,i++;
				}
			}
			if(count>result)
			{
				result = count;
				resword=strword;
			}
		}
	}
	
	cout<<resword<<endl;
	
	return 0;
}
