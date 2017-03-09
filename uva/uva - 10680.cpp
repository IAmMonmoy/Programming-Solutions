#include <bits/stdc++.h>
#define ll long long int
#define ii pair<int,int>
#define rep(i,a,b) for(int i = a; i < b; i++)
#define per(i,a,b) for(int i = b-1; i >= a; i--)
#define MAX 1000256
using namespace std;
int gcd(int a, int b) {return b == 0?a:gcd(b,a%b);}
int lcm(int a, int b){return a*(b/gcd(a,b));}
vector<int>prime;
bitset<MAX+2>bt;
void sieve()
{
    bt.flip();
    prime.push_back(2);
    for(ll i = 3; i <= MAX; i+=2)
        if(bt[i])
        {
            for(ll j = i*i; j<= MAX; j+=i+i)
                bt[j]=0;
            prime.push_back(i);
        }
    swap(prime[1],prime[2]);
}
int main()
{
    sieve();
    int n;
    while(scanf("%d", &n) == 1 && n)
    {
       int res = 1;
        int c2 = 0, c5 = 0;
      for(int i = 2; i <= n; i*=2) c2++;
      for(int i = 5; i <= n; i*=5) c5++;
      for(int i = 0; i < c2-c5; ++i) res = (res * 2) % 10;
      for(int i = 2; i < prime.size(); ++i) {
         if(prime[i] > n) break;
         for(ll j = prime[i]; j <= n; j*=prime[i])
            res = (res * prime[i]) % 10;
      }
      printf("%d\n",res);
    }
    return 0;
}
