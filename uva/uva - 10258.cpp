#include<bits/stdc++.h>
using namespace std;
class jk
{
public:
    bool subs;
    int solve;
    int penalty;
    int number;
    int tri[11];
    jk()
    {
        solve=0,penalty=0;
        for(int i=0;i<11;i++) tri[i]=0;
        subs=false;
    }
};
bool compare(jk a, jk b)
{
    if(a.solve == b.solve)
    {
        if(a.penalty == b.penalty)
        {
            return a.number < b.number;
        }
        return a.penalty < b.penalty;
    }
    return a.solve > b.solve;
}
int main()
{
    int t,c,n,tm,flag=0;
    char v;
    char s[1000];
    scanf("%d\n",&t);

    while(t--)
    {
        jk ob[104];
        for(int i = 0; i <= 100; i++)
            ob[i].number=i;


        while(gets(s) && s[0]!='\0')
        {
            sscanf(s,"%d %d %d %c",&c,&n, &tm, &v);
            ob[c].subs=true;
            if(v == 'C' && ob[c].tri[n] != -1)
            {
                ob[c].penalty += (ob[c].tri[n]*20) + tm;
                ob[c].solve++;
                ob[c].tri[n]=-1;
            }
            else if(v == 'I' && ob[c].tri[n] != -1)
            {
                ob[c].tri[n]++;
            }
        }
        sort(ob,ob+101,compare);
        if(flag)
            printf("\n");
        flag = 1;
        for(int i = 0; i <= 101; i++)
        {
            if(ob[i].subs)
                cout<<ob[i].number<<" "<<ob[i].solve<<" "<<ob[i].penalty<<endl;
        }

    }
    return 0;
}
