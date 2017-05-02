#include <bits/stdc++.h>

#define ll long long int
#define ul unsigned long long int

#define getI(a) scanf("%d", &a)
#define getII(a,b) scanf("%d %d", &a, &b)
#define getIII(a,b,c) scanf("%d %d %d", &a, &b, &c)

#define getC(a) scanf("%c",&a)

#define chkII(a,b) cout<<a<<" "<<b<<endl;
#define chkIII(a,b,c) cout<<a<<" "<<b<<" "<<c<<endl;
#define debug() cout<<"yes"<<endl;

#define ii pair<int,int>
#define pb push_back
#define All(x) (x.begin(),x.end())
#define mset(x,m) memset(x,m,sizeof(x))
#define xx first
#define yy second
#define mp make_pair

#define rep(i,a,b) for(int i = a; i < b; i++)
#define per(i,a,b) for(int i = b-1; i >= a; i--)

#define inf
#define MAX

//direction array
int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};

//in the limit
int inbound(int n, int m, int x, int y) { if(x >= 0 && x < n && y >= 0 && y < m) return 1; return 0;}
using namespace std;
int main()
{
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    int n,m,c,sequence=0;

    while(scanf("%d %d %d", &n, &m, &c) == 3 && n && m && c)
    {
        int isrunning[22],consumption[22],input;
        int total = 0,mx=0,blown = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &consumption[i]);
            isrunning[i]=0;
        }
        isrunning[n]=0;

        for(int i = 0; i < m; i++)
        {
            scanf("%d", &input);
            input--;
            if(!isrunning[input] && total+consumption[input] <= c)
            {
                total+=consumption[input];
                isrunning[input] = 1;
                mx = max(mx,total);
            }
            else if(isrunning[input])
            {
                total-=consumption[input];
                isrunning[input]=0;
            }
            else if(total+consumption[input] > c)
                blown = 1;
        }
        printf("Sequence %d\n",++sequence);

        if(blown)
            printf("Fuse was blown.\n\n");
        else{
            printf("Fuse was not blown.\n");
            printf("Maximal power consumption was %d amperes.\n\n",mx);
        }
    }

    return 0;
}

