#include <cstdio>
#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main()
{
    int i,j,k,l,n,opt,tmp,temp;


    while(scanf("%d",&n) == 1)
    {
        stack<int> S;
        queue<int> Q;
        priority_queue<int> P;
        bool ss ,qq, pp;

        ss = pp = qq = true;
        while(n--)
        {
            scanf("%d %d",&opt,&tmp);

            if(opt == 1)
            {
                if(ss)
                    S.push(tmp);
                if(qq)
                    Q.push(tmp);
                if(pp)
                    P.push(tmp);
            }
            else if(opt == 2)
            {
                if(ss)
                {
                    if(!S.empty() && S.top() == tmp)
                    {
                        S.pop();
                    }
                    else ss = false;
                }
                if(qq)
                {
                    if(!Q.empty() && Q.front() == tmp)
                    {
                        Q.pop();
                    }
                    else
                        qq = false;
                }
                if(pp)
                {
                    if(!P.empty() && P.top() == tmp)
                    {
                        P.pop();
                    }
                    else pp = false;
                }
            }
        }

        if(ss && !pp && !qq)
            printf("stack\n");
        else if(!ss && !pp && qq)
            printf("queue\n");
        else if(!ss && pp && !qq)
            printf("priority queue\n");
        else if(pp || qq || ss)
            printf("not sure\n");
        else
            printf("impossible\n");
    }
    return 0;
}
