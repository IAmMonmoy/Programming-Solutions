#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int cases=0;
	char str[20];
	while(scanf("%s",str)==1)
	{
		if(strcmp(str,"#")==0)
			break;
		if(strcmp(str,"HELLO")==0)
			printf("Case %d: ENGLISH\n",++cases);
		else if(strcmp(str,"HOLA")==0)
			printf("Case %d: SPANISH\n",++cases);
		else if(strcmp(str,"HALLO")==0)
			printf("Case %d: GERMAN\n",++cases);
		else if(strcmp(str,"BONJOUR")==0)
			printf("Case %d: FRENCH\n",++cases);
		else if(strcmp(str,"CIAO")==0)
			printf("Case %d: ITALIAN\n",++cases);
		else if(strcmp(str,"ZDRAVSTVUJTE")==0)
			printf("Case %d: RUSSIAN\n",++cases);
		else 
			printf("Case %d: UNKNOWN\n",++cases);
	}
	return 0;
}
