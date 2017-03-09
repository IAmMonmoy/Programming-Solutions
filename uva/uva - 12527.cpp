#include <bits/stdc++.h>
using namespace std ;
int check (int n)
{
    char s[10000] ;
    int i , j ,len ;
    sprintf (s ,"%d", n) ;

    len= strlen (s) ;
    for (i=0 ; i<len-1 ; i++)
        for (j=i+1 ; j<len ; j++)
        {
            if (s[i] == s[j])  return 1 ;
        }

return 0 ;
}

int main ()
{
    int n , m , i ,x ,cnt ;

    while (scanf ("%d %d",&n,&m)==2)
    {
        cnt=0 ;
        for (i=n ; i<=m ; i++)
        {
            x= check(i) ;
            if (x==0) cnt++ ;
        }
        printf("%d\n",cnt);
    }

    return 0 ;
}
