#include <bits/stdc++.h>
using namespace std;
int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   for(int i = 0; i <= m ; i++)
   		L[i][0]=0;
	for(int i = 0; i <= n ; i++)
   		L[0][i]=0;	
   int i, j;
   for (i=1; i<=m; i++)
   {
     for (j=1; j<=n; j++)
     {
       if (X[i-1] == Y[j-1])
         L[i][j] = L[i-1][j-1] + 1;
  
       else
         L[i][j] = max(L[i-1][j], L[i][j-1]);
     }
   }
    
   return L[m][n];
}
  
int max(int a, int b)
{
    return (a > b)? a : b;
}
  
int main()
{
  char x[1010],y[1010];
  while(gets(x))
  {
  	gets(y);
  	int len1= strlen(x);
  	int len2 = strlen(y);
  	printf("%d\n",lcs(x,y,len1,len2));
  }
  return 0;
}
