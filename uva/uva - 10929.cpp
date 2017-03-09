#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char x[1010];
    while(scanf("%s",x)==1)
    {
        if(strcmp(x,"0")==0)
            break;
        int len = strlen(x);
        if(len==1)
    	{
    		printf("%s is not a multiple of 11.\n",x);
    		continue;
    	}
    	int i = 0,var,r=0;
    	while(i<len)
    	{
    		if(i+1<len)
    		{
    			var = (r*100)+((x[i]-'0')*10)+(x[i+1]-'0');
    			r = var%11;
    			i+=2;
    		}
    		else
    		{
    			var = (r*10)+((x[i]-'0'));
    			r = var%11;
    			i+=1;
    		}
    	}
        if(r==0)
            printf("%s is a multiple of 11.\n",x);
        else
            printf("%s is not a multiple of 11.\n",x);
    }
    return 0;
}
