#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int a,total_bottle,x;
    while(scanf("%d", &a) == 1)
    {
    	int i=0;
    	if(a==0)
    		break;
        int temp = a;
        while(a > 2)
        {
            x = a/3;
            i+=x;
            a = a%3+x;
            if(a < 3)
                break;
        }
        if(a < 2)
        {
        	printf("%d\n",i);
        }
        else
        {
        	i=0;
            temp+=1;
             while(temp > 1)
            {
                x = temp/3;
    			i+=x;
                temp = temp%3+x;
                if(temp < 3)
                    break;
            }
            printf("%d\n",i);
        }
    }
    return 0;
}
