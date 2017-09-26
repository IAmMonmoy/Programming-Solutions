/*
Author : Rajob Raihan Monmoy
Email : IAmMonmoy@gmail.com
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
string result(string s)
{
    int len = s.length();
    string finalString = "";
    rep(i,0,len)
    {
        if(s[i] == 'A' || s[i] == 'E' ||s[i] == 'I' ||s[i] == 'O' ||s[i] == 'U'||
           s[i] == 'Y' ||s[i] == 'a' ||s[i] == 'e' ||s[i] == 'i' ||s[i] == 'o' ||
           s[i] == 'u'||s[i] == 'y')
            continue;
        if(s[i] <= 90)
        {
            finalString +='.';
            finalString +=(s[i]+32);
        }
        else
        {
            finalString +='.';
            finalString +=(s[i]);
        }
    }
    return finalString;
}
int main()
{
    //freopen("output.txt","w",stdout);
    //freopen("input.txt","r",stdin);
    string s;
    while(cin>>s)
    {
        cout<<result(s)<<endl;
    }
    return 0;
}

