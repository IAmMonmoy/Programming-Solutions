#include <bits/stdc++.h>
#define ll long long int
#define N 4000
using namespace std;
bool mark [N+2];
vector <int> primeList;

void seive ()
{
    memset (mark, true, sizeof (mark));

    mark [0] = mark [1] = false;
     primeList.push_back(2);
    for ( ll i = 3; i <= N; i += 2 ) {
        if ( mark [i] ) {
            for ( ll j = i * i; j <= N; j += i + i ) mark [j] = false;
            primeList.push_back(i);
        }
    }

}
int power (int a, int b)
{
    int ret = 1;

    for ( int i = 1; i <= b; i++ ) ret *= a;

    return ret;
}

int factors (int a, int b)
{
    int ret = 1;
    int in = 0;
    int tmp = a;

    while ( primeList [in] * primeList [in] <= tmp ) {
        int cnt1 = 0;
        int cnt2 = 0;

        while ( a % primeList [in] == 0 ) {
            a /= primeList [in];
            cnt1++;
        }

        while ( b % primeList [in] == 0 ) {
            b /= primeList [in];
            cnt2++;
        }

        if ( cnt1 > cnt2 ) ret *= power (primeList [in], cnt1);

        in++;
    }

    if ( a > 1 && b == 1 ) ret *= a;

    return ret;
}

int main ()
{
    seive ();
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        int a, c;
        scanf ("%d %d", &a, &c);

        if ( c % a == 0 ) {
            printf ("%d\n", factors (c, a));
        }
        else printf ("NO SOLUTION\n");
    }

    return 0;
}
