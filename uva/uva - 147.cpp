/*Author : Rajob Raihan Monmoy
Date :
Email : iammonmoy@gmail.com
*/
#include <bits/stdc++.h>

#define ll long long int
#define ul unsigned long long int

#define getI(a) scanf("%d", &a)
#define getII(a,b) scanf("%d %d", &a, &b)
#define getIII(a,b,c) scanf("%d %d %d", &a, &b, &c)

#define getC(a) scanf("%c",&a)

#define chkII(a,b) cout<<a<<" "<<b<<endl;
#define chkIII(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;

#define ii pair<int,int>
#define pb push_back
#define All(x) (x.begin(),x.end())
#define mset(x,m) memset(x,m,sizeof(x))
#define xx first
#define yy second
#define mp make_pair

#define rep(i,a,b) for(int i = a; i < b; i++)
#define per(i,a,b) for(int i = b-1; i >= a; i--)

#define inf 1e9
#define MAX

const double eps = 10E-9;
//direction array
int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};


//in the limit
int inbound(int n, int m, int x, int y) { if(x >= 0 && x < n && y >= 0 && y < m) return 1; return 0;}

using namespace std;
int fnd,d[12],cent;
ll sav[30010][11];
ll recur(ll money, ll i)
{
    if(money < 0) return 0;
    if(money == 0) return 1;
    if(i>=11) return 0;

    if(sav[money][i] != -1)
        return sav[money][i];

    ll t = recur(money-d[i],i) + recur(money,i+1);

    sav[money][i]=t;
    return t;
}
int main()
{
    double inpt;
    mset(sav,-1);
    d[0]=10000,d[1]=5000,d[2]=2000,d[3]=1000,d[4]=500,d[5]=200,d[6]=100,d[7]=50,d[8]=20,d[9]=10,d[10]=5;
    while(scanf("%lf",&inpt)==1 && inpt != 0.00)
    {
        int x = (inpt+eps)*100;
        printf("%6.2lf%17lld\n",inpt,recur(x,0));
    }
    return 0;
}

