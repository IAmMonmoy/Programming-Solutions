#include <bits/stdc++.h>
using namespace std;
int lcs( int *X, int *Y, int m, int n )
{
   int L[m+1][n+1];
    for(int i=0;i<=m;i++)
        L[i][0]=0;
    for(int i=0;i<=n;i++)
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
  int x[110],y[110];
  int a,b,cases=0;
  while(scanf("%d %d", &a, &b) == 2 && (a||b))
  {
  	for(int i = 0; i < a; i++)
  		scanf("%d", &x[i]);
  	for(int i = 0; i < b; i++)
  		scanf("%d", &y[i]);
  	printf("Twin Towers #%d\nNumber of Tiles : %d\n",++cases,lcs(x,y,a,b));
  	printf("\n");
  }
  return 0;
}
