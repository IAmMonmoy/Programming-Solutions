#include <bits/stdc++.h>
using namespace std;
int fx [] = {-1, -1, 0, 1, 1, 1, 0, -1};
int fy [] = {0, 1, 1, 1, 0, -1, -1, -1};

int n;
char mnmy[105] [105];

void dfs (int p, int q)
{
    if ( p < 0 || p == n || q < 0 || q == n || mnmy[p] [q] == '.' ) return;

    mnmy[p] [q] = '.';

    for ( int i = 0; i < 8; i += 1 )
        dfs (p + fx [i], q + fy [i]);
}

int main ()
{
    int testCase; 
	scanf ("%d", &testCase);
    int cases = 0;

    while ( testCase-- ) {
        scanf ("%d", &n);

        for ( int i = 0; i < n; i++ ) 
			scanf ("%s", mnmy[i]);

        int result = 0;

        for ( int i = 0; i < n; i++ ) {
            for ( int j = 0; j < n; j++ ) {
                if ( mnmy[i] [j] == 'x' ) 
				{ 
					result++; 
					 dfs (i, j);
				 }
            }
        }

        printf ("Case %d: %d\n", ++cases, result);
    }

	return 0;
}
