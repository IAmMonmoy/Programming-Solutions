#include <bits/stdc++.h>
using namespace std;
int lcs( char *X, char *Y, int m, int n )
{
   int L[m+1][n+1];
   int i, j;
   for (i=0; i<=m; i++)
   {
     for (j=0; j<=n; j++)
     {
       if (i == 0 || j == 0)
         L[i][j] = 0;
  
       else if (X[i-1] == Y[j-1])
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
  char x[110],y[110];
  int cases=0;
  while(gets(x))
  {
  	if(strcmp(x,"#") == 0)
  		break;
  	gets(y);
  	int len1= strlen(x);
  	int len2 = strlen(y);
  	printf("Case #%d: you can visit at most %d cities.\n",++cases,lcs(x,y,len1,len2));
  }
  return 0;
}
