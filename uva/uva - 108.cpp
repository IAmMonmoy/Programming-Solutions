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

//debug
#define chkI(x,a) cout<<x<<" "<<a<<endl;
#define chkII(x,a,b) cout<<x<<" "<<a<<" "<<b<<endl;
#define chkIII(x,a,b,c) cout<<x<<" "<<a<<" "<<b<<" "<<c<<endl;

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
using namespace std;
//direction array
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

ll square(ll x) { return x*x;}

ll Pow(ll a, ll b) {if(b==1) return a; else if(b%2!=0) return a*pow(a,b-1); else { ll x = pow(a,b/2) ; return x*x;} }
//in the limit
int inbound(int n, int m, int x, int y) { if(x >= 0 && x < n && y >= 0 && y < m) return 1; return 0;}
struct abc
{
    int fst;
    int lst;
    int sum;
}result,max_so_far;
void kadane(int a[],int n)
{
    max_so_far.sum=0;
    max_so_far.fst=1;
    max_so_far.lst=-1;

    result.sum = -inf;

    for(int i = 0; i < n; i++)
    {
        max_so_far.sum+=a[i];
        if(max_so_far.sum < 0)
        {
            max_so_far.fst=i+2; //next one  + 1 for index start from 1
            max_so_far.sum=0;
        }
        max_so_far.lst = i+1;

        if(max_so_far.sum > result.sum)
        {
            result.sum = max_so_far.sum;
            result.fst = max_so_far.fst;
            result.lst = max_so_far.lst;
        }
    }
}
int main()
{
    int n,inpt[110][110];
    getI(n);
    for(int i = 0;  i < n; i++)
        for(int j = 0; j < n; j++)
            getI(inpt[i][j]);

    int temp_ara[110];

    int mx = 0;

    for(int k = 0; k < n; k++)
    {
        mset(temp_ara,0);
        for(int i = k; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                temp_ara[j]+=inpt[j][i];
            }
            kadane(temp_ara,n);

            mx = max(mx,result.sum);
        }
    }

    printf("%d\n",mx);
    return 0;
}
