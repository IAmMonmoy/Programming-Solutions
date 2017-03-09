#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1000],j,i,d,k;
	scanf("%d", &k);
	while(k--)
	{
	    scanf("%d", &n);
	    if(n<10)
		{
            cout<<n<<endl;
            continue;
	    }
	    d=9;
	    i=0;
	    while(d>1)
		{
          while(n%d==0)
		  {
               n/=d;
               a[i++]=d;
        	}
          d--;
        }
	    sort(a,a+i);
	    if(n==1)
		{
           for(j=0;j<i;j++)
        		printf("%d",a[j]);
           printf("\n");
	    }
	    else 
	    	printf("-1\n");
	}
	return 0;
}
