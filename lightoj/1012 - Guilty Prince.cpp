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

#define inf
#define MAX

//direction array
int fx[]={+1,-1,+0,+0};
int fy[]={+0,+0,+1,-1};

//in the limit
int inbound(int n, int m, int x, int y) { if(x >= 0 && x < n && y >= 0 && y < m) return 1; return 0;}

using namespace std;

class Point
{
    public:
        int x;
        int y;
};

char input[21][21];
bool visited[21][21];
int W,H,T;
queue<Point>q;

int RunBfs(Point start)
{
    mset(visited,false);

    q.push(start);
    visited[start.x][start.y] = true;
    int places = 1;

    while(!q.empty())
    {
        Point top = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            Point newNode;
            newNode.x = top.x + fx[i];
            newNode.y = top.y + fy[i];

            if(newNode.x < H && newNode.y < W && newNode.x >= 0 && newNode.y >= 0 &&
               !visited[newNode.x][newNode.y] && input[newNode.x][newNode.y] == '.')
            {
                places++;
                visited[newNode.x][newNode.y] = true;
                q.push(newNode);
            }
        }


    }

    return places;
}

void TakeInput()
{
    cin>>T;
    for(int i = 0; i < T; i++)
    {
        Point start;
        cin>>W>>H;
        for(int j = 0; j < H; j++)
        {
            for (int k = 0; k < W; k++)
            {
                cin>>input[j][k];
                if(input[j][k] == '@')
                {
                    start.x = j;
                    start.y = k;
                }
            }
        }

        printf("Case %d: %d\n",i+1,RunBfs(start));
    }


}

int main()
{
    TakeInput();
    return 0;
}
