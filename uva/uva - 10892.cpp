#include <bits/stdc++.h>
#define ll long long int
#define ii pair<int,int>
#define rep(i,a,b) for(int i = a; i < b; i++)
#define per(i,a,b) for(int i = b-1; i >= a; i--)
#define MAXX 47000
using namespace std;
vector<int>prime;
bitset<MAXX+2>bt;
int ara[MAXX],cnt;
int gcd(int a, int b) {return b == 0?a:gcd(b,a%b);}
int lcm(int a, int b){return a*(b/gcd(a,b));}
int main()
{
    int n;
    while(scanf("%d", &n) == 1 && n)
    {
        int x = n;
      vector<int> D;
      int m = (int)sqrt(n);
      for(int d = 1; d <= m; ++d) {
         if(x % d == 0) {
            int d2 = x / d;
            D.push_back(d);
            if(d != d2) D.push_back(d2);
         }
      }
      int res = 0;
      for(int i = 0; i < D.size(); ++i) {
         for(int j = i; j < D.size(); ++j) {
            if(lcm(D[i],D[j]) == n)
               res++;
         }
      }
      printf("%d %d\n", n, res);
    }
    return 0;
}
