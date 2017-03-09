#include<bits/stdc++.h>


using namespace std;
#define pf printf

int main()
{
    int n,m,i,j,k,l;
    int a[1001] , b[1001];
    scanf("%d",&n);
    char er = '"';
    while(n--)
    {
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%d",&a[i]);
        }
        for(k=0;k<m;k++)
        {
            scanf("%d",&b[k]);
        }
        for(j=0;j<m;j++)
        {
            if(a[j]==0)
            {
                if(b[j]==1)
                 pf(" ");
            }
            if(a[j]==1)
            {
                if(b[j]==1)
                    pf(".");
                else if(b[j]==2)
                    pf(",");
                else if(b[j]==3)
                    pf("?");
                else pf("%c",er);
            }
            if(a[j]==2)
            {
                if(b[j]==1)
                    pf("a");
                else if(b[j]==2)
                    pf("b");
                else if(b[j]==3)
                    pf("c");
                //else pf(""");
            }
            if(a[j]==3)
            {
                if(b[j]==1)
                    pf("d");
                else if(b[j]==2)
                    pf("e");
                else if(b[j]==3)
                    pf("f");
                //else pf(""");
            }
            if(a[j]==4)
            {
                if(b[j]==1)
                    pf("g");
                else if(b[j]==2)
                    pf("h");
                else if(b[j]==3)
                    pf("i");
                //else pf(""");
            }
            if(a[j]==5)
            {
                if(b[j]==1)
                    pf("j");
                else if(b[j]==2)
                    pf("k");
                else if(b[j]==3)
                    pf("l");
                //else pf(""");
            }
            if(a[j]==6)
            {
                if(b[j]==1)
                    pf("m");
                else if(b[j]==2)
                    pf("n");
                else if(b[j]==3)
                    pf("o");
                //else pf(""");
            }
            if(a[j]==7)
            {
                if(b[j]==1)
                    pf("p");
                else if(b[j]==2)
                    pf("q");
                else if(b[j]==3)
                    pf("r");
                else pf("s");
            }
            if(a[j]==8)
            {
                if(b[j]==1)
                    pf("t");
                else if(b[j]==2)
                    pf("u");
                else if(b[j]==3)
                    pf("v");
                //else pf(""");
            }
            if(a[j]==9)
            {
                if(b[j]==1)
                    pf("w");
                else if(b[j]==2)
                    pf("x");
                else if(b[j]==3)
                    pf("y");
                else pf("z");
            }

        }
        pf("\n");
    }
}

