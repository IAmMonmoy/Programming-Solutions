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
    int T,result[110],cases=0;
    scanf("%d", &T);
    while(T--)
    {
        string s;
        memset(result,0,sizeof(result));
        cin>>s;
        int len = s.length();
        int pointer = 0;
        for(int i = 0; i < len; i++)
        {
            if(s[i] == '>')
            {
                pointer++;
                if(pointer > 99)
                    pointer = 0;
            }
            else if(s[i] == '<')
            {
                pointer--;
                if(pointer < 0)
                    pointer = 99;
            }
            else if(s[i] == '+')
            {
                result[pointer]++;
                if(result[pointer] > 255)
                    result[pointer] = 0;
            }
            else if(s[i] == '-')
            {
                result[pointer]--;
                if(result[pointer] < 0)
                    result[pointer] = 255;
            }
        }
        printf("Case %d: ",++cases);
        for(int i = 0; i < 100; i++)
        {
            int notzero = 0; //if the result is zero itoa result is 0 but the output should be 00
            string buffer;
            stringstream ss;
            ss<<hex<<result[i];
            buffer = ss.str();
            for(int j = 0; j < buffer.length(); j++)
            {
                if(j != 0)
                    notzero = 1; //checking if all are 0
                buffer[j]=toupper(buffer[j]);
            }
            if(notzero == 0)
                printf("0");

            if(i == 99)
                cout<<buffer;
            else
                cout<<buffer<<" ";
        }
        printf("\n");
    }
    return 0;
}
